#include "Components.h"

void handleEvents() {
    // Process events
    sf::Event event;
    while (window->pollEvent(event)) {
        // Close window : exit
        if (event.type == sf::Event::Closed || (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)) {
            window->close();
            exit(1);
        }

        /*
        if (event.type == sf::Event::Resized) {
            // update the view to the new size of the window
            sf::FloatRect visibleArea(0.0f, 0.0f, (float)event.size.width, (float)event.size.height);
            window->setView(sf::View(visibleArea));

            window_size = window->getSize(); window_w = window_size.x; window_h = window_size.y;
            MID_X = window_w / 2;
            MID_Y = window_h / 2;
            DEFAULT_X = (window_w / 2) - ((window_w * 2) / 5);
            DEFAULT_Y = (window_h / 2) - ((window_h * 2) / 5);
            TOP_MID_Y = (window_h / 2) - (window_h / 4);
            BOTTOM_MID_Y = (window_h / 2) + (window_h / 4);
            fade.setSize(sf::Vector2f((float)window_w, (float)window_h));
        }

        if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::F11) {

            if (fullscreen == false) {
                window->create(sf::VideoMode(window_w, window_h), "INSIDE", sf::Style::Fullscreen);
                fullscreen = true;
            }
            else {
                window->create(sf::VideoMode(window_w, window_h), "INSIDE");
                fullscreen = false;
            }
        }*/

        if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Enter && input != "") {
            selection.play();
            isChoice = false;
        }


        else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Backspace && isChoice == true && letterCount > 0) {

            sf::Text inputCharacter(old_text.back().text, font, FONT_SIZE);
            float inputCharacterSpacing;

            input = input.substr(0, input.length() - 1);

            std::cout << old_text.back().text;

            old_text.pop_back();
            inputCharacterSpacing = inputCharacter.getGlobalBounds().width;

            std::cout << inputCharacterSpacing;

            MyText.last_x = MyText.last_x - (inputCharacterSpacing * 1.1f);
            window->clear();
            MyText.printOld();
            window->display();
            letterCount--;
        }


        else if (event.type == sf::Event::TextEntered && isChoice == true)
        {
            if (event.text.unicode < 128 && event.text.unicode >= 32) {
                character = event.text.unicode;
                input += event.text.unicode;
                MyText.printText(character, 0);
                letterCount++;
                character = "";
            }
        }
    }

    
}


int printCursor(int x, int y) {
    sf::RectangleShape rect(sf::Vector2f(FONT_SIZE * 1.2f, FONT_SIZE * 1.2f));
    rect.setPosition((float)x, (float)y);

    rect.setTexture(&cursor);
    sf::Clock timer;
    float add = 0.8f;
    bool reverse = true;

    while (1) {
        sf::sleep(sf::milliseconds(1));
        handleEvents();
        window->clear();

        MyText.TextEngine::printOld();
        CalculateAnimForCursor(&timer, &rect, &add, &reverse);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            selection.play();
            return 0;
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            selection.play();
            return 1;
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) || sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace)) {
            selection.play();
            return 2;
        }

        window->draw(rect);

        if (print_PIPES) {
            window->draw(pipes);
            window->draw(pipeA);
            window->draw(pipeB);
            window->draw(pipeC);
            window->draw(pipeD);
            window->draw(pipes_glass);
        }

        window->display();
    }
}

void CalculateAnimForCursor(sf::Clock* timer, sf::RectangleShape* rect, float* add, bool* reverse) {

    if (timer->getElapsedTime() >= sf::milliseconds(50)) {

        if (*add >= 0.8 || *add <= -0.8)
            if (*reverse == true)
                *reverse = false;
            else
                *reverse = true;

        if (*reverse == true)
            *add = *add + 0.1f;

        if (*reverse == false)
            *add = *add - 0.1f;


        rect->setPosition(rect->getPosition().x, rect->getPosition().y + *add);
        timer->restart();
    }

}

void initFont() {

    if (!font.loadFromFile("Fonts/RodinM.otf"))
        std::cout << "Could not load the font file." << std::endl;


    if (!font_cascadia.loadFromFile("Fonts/CascadiaMono.ttf"))
        std::cout << "Could not load the font file." << std::endl;


    if (!font_georgia.loadFromFile("Fonts/Georgia.ttf"))
        std::cout << "Could not load the font file." << std::endl;


    if (!font_gothic.loadFromFile("Fonts/Gothic.ttf"))
        std::cout << "Could not load the font file." << std::endl;


    if (!font_8bit.loadFromFile("Fonts/8bit.ttf"))
        std::cout << "Could not load the font file." << std::endl;
}