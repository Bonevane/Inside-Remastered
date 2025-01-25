#include "Text.h"

void TextEngine::currentToOld()
{
    old_text.push_back(current);

    current.text = "";
    current.ID = 0;
    current.x = 0;
    current.y = 0;
    current.STYLE = NORMAL;
    current.FONT = RODIN;
}

void TextEngine::setColor(sf::Text* text, int ID, int STYLE, int FONT) {

    switch (FONT) {
    case RODIN:
        text->setFont(font);
        break;
    case CASCADIA:
        text->setFont(font_cascadia);
        break;
    case GOTHIC:
        text->setFont(font_gothic);
        break;
    case GEORGIA:
        text->setFont(font_georgia);
        break;
    case BIT:
        text->setFont(font_8bit);
        break;
    }

    switch (ID) {
    case WHITE:
        text->setFillColor(sf::Color(245, 245, 245, 255));
        break;
    case BLUE:
        text->setFillColor(sf::Color::Blue);
        break;
    case YELLOW:
        text->setFillColor(sf::Color(255, 191, 0, 255));
        break;
    case GREEN:
        text->setFillColor(sf::Color(154, 205, 50, 255));
        break;
    case RED:
        text->setFillColor(sf::Color(200, 0, 0, 255));
        break;
    case GREY:
        text->setFillColor(sf::Color::Color(128, 128, 128, 255));
        break;
    case FULL_WHITE:
        text->setFillColor(sf::Color::White);
        break;
    default:
        break;
    }

    switch (STYLE) {
    case NORMAL:
        text->setStyle(sf::Text::Regular);
        break;
    case BOLD:
        text->setStyle(sf::Text::Bold);
        break;
    case ITALIC:
        text->setStyle(sf::Text::Italic);
        break;
    case B_ITALIC:
        text->setStyle(sf::Text::Bold | sf::Text::Italic);
        break;
    }
}

void TextEngine::printOld() {

    sf::Text text("", font, FONT_SIZE);
    //index = 1;

    if (print_MAP) {
        window->draw(mapText);
        window->draw(compassTex);
    }
        

    if (print_Moon || print_couple || print_Polaroid)
        printItemPNG(PNGNumber);

    if (print_EnemyHUD) {
        printEnemyHUD();
    }
    else
        something_ALPHA = 0;

    if (print_HUD)
        printHUD();

    for (auto i = old_text.begin(); i != old_text.end(); i++) {
        if (i->text != "") {
            text.setString(i->text);
            text.setPosition(i->x, i->y);// + (index * (FONT_SIZE + 2)));
            text.setCharacterSize(i->text_size);
            //index++;

            setColor(&text, i->ID, i->STYLE, i->FONT);

            // Draw the string
            window->draw(text);
        }
    }   
}

void TextEngine::printCurrent(CURRENT* current, int delay, int color, int MIDDLE_X, int MIDDLE_Y, bool CONTINUE, bool push) {

    sf::Clock timer;
    unsigned int character = 0;
    int size = current->text.size();

    dialogue.setBuffer(buffer);
    dialogue.setVolume(40);


    sf::Text text("", font, FONT_SIZE);
    text.setString(current->text);
    text.setCharacterSize(current->text_size);
    setColor(&text, current->ID, current->STYLE, current->FONT);

    float width = text.getLocalBounds().width;
    float height = text.getLocalBounds().height;


    if (width >= (window_w * 4) / 5 && MIDDLE_X == 0) {
        textWrap();
        text.setString(current->text);
    }

    if (CONTINUE == false)
        index = 0;


    if (MIDDLE_X == 1) {
        current->x = MID_X;
        current->x -= width / 2;
    }

    if (MIDDLE_Y == 1) {
        current->y = MID_Y;
        current->y -= height / 2;
    }

    if (push == true) {
        last_xy = text.findCharacterPos(current->text.length());
        last_x = last_xy.x;
        last_y = last_xy.y;

        currentToOld();
        return;
    }

    while (window->isOpen())
    {
        if(isChoice == false)
            handleEvents();

        if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::RShift) && delay > 0) {
            if (timer.getElapsedTime() > sf::milliseconds(delay) && character <= size + 1)
            {
                // Clear screen
                window->clear(sf::Color::Black);

                // Draw the old text
                printOld();

                if (print_MAP)
                    window->draw(mapText);

                timer.restart();
                character++;
                text.setString(sf::String(current->text.substr(0, character)));
                text.setPosition(current->x, current->y);

                // Draw the current text
                window->draw(text);

                // Update the window
                window->display();

                if (current->text[character] != ' ') dialogue.play();
                if (current->text[character] == '.' || current->text[character] == ',') sleep(250);

                if (character > size) {
                    text.setString(current->text);
                    break;
                }
            }
        }
        else {

            sf::sleep(sf::milliseconds(50));

            // Clear screen
            window->clear(sf::Color::Black);

            // Draw the old text
            printOld();

            if(print_MAP)
                window->draw(mapText);

            text.setString(current->text);
            text.setPosition(current->x, current->y);

            // Draw the current text
            window->draw(text);

            // Update the window
            window->display();

            break;
        }
    }

    index++;

    for (int i = 0; i < current->text.size(); i++) {
        if (current->text[i] == '\n') {
            index++;
        }
    }

    last_xy = text.findCharacterPos(current->text.length());
    last_x = last_xy.x;
    last_y = last_xy.y;

    currentToOld();
}

void TextEngine::printText(std::string text, int delay, int color, int x, int y, int MIDDLE_X, int MIDDLE_Y, int size, bool push, int STYLE, int FONT)
{
    current.text = text;
    current.ID = color;
    current.STYLE = STYLE;
    current.FONT = FONT;


    current.text_size = size;


    if (x == DEFAULT_X && y == DEFAULT_Y) {
        current.x = last_x;
        current.y = last_y;
        printCurrent(&current, delay, color, MIDDLE_X, MIDDLE_Y);
    }

    else {
        current.x = x;
        current.y = y;
        printCurrent(&current, delay, color, MIDDLE_X, MIDDLE_Y, false, push);
    }

}

void TextEngine::clearOld() {
    old_text.clear();
    index = 0;
    last_x = DEFAULT_X;
    last_y = DEFAULT_Y;
}

void TextEngine::textWrap() {

    sf::Text test(current.text, font, FONT_SIZE);
    float temp_width = test.getLocalBounds().width / current.text.length();
    float text_length = ((window_w * 4) / 5) / temp_width;
    int temp = 0;

    std::string curr;
    std::string remaining = current.text;
    std::string final = "";



    while (1) {

        curr = remaining.substr(0, remaining.find("\n"));

        test.setString(curr);
        temp_width = test.getLocalBounds().width / curr.length();
        text_length = ((window_w * 4) / 5) / temp_width;

        if (curr.length() >= text_length) {
            remaining.insert(text_length, "\n");
            curr = remaining.substr(0, remaining.find("\n"));
        }

        if (remaining[remaining.find("\n")] == '\n')
            curr = curr + "\n";

        final = final + curr;

        temp = remaining.find("\n");
        remaining = remaining.substr(temp + 1);

        std::cout << remaining;

        if (test.getLocalBounds().width <= (window_w * 4) / 5)
            break;

        test.setString(remaining);
    }

    current.text = final;
}