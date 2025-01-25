#include "Text.h"

TextEngine MyText;
TextEngine tutorial;
sf::RectangleShape fade(sf::Vector2f(window_w, window_h));

sf::RenderWindow* window = nullptr;
sf::Font font;
sf::Font font_cascadia;
sf::Font font_gothic;
sf::Font font_georgia;
sf::Font font_8bit;
int FONT_SIZE = 28;

sf::Texture cursor;
sf::Vector2f last_xy;

sf::Vector2u window_size;
unsigned int window_w = 1920;
unsigned int window_h = 1080;
unsigned int MID_X = window_w / 2;
unsigned int MID_Y = window_h / 2;
unsigned int DEFAULT_X = (window_w / 2) - ((window_w * 2) / 5);
unsigned int DEFAULT_Y = (window_h / 2) - ((window_h * 2) / 5);
unsigned int TOP_MID_Y = (window_h / 2) - (window_h / 4);
unsigned int BOTTOM_MID_Y = (window_h / 2) + (window_h / 4);

int TEXT_PAD = 0;
bool fullscreen = false;

std::string input;
bool isChoice = false;
std::string character;
int letterCount = 0;

std::vector<CURRENT> old_text;

void pause(bool draw)
{
    sf::RectangleShape rect(sf::Vector2f(old_text.back().text_size * 1.2, old_text.back().text_size * 1.2));
    sf::Text temp(old_text.back().text, font, old_text.back().text_size);
    temp.setPosition(old_text.back().x, old_text.back().y);

    if (old_text.back().text[old_text.back().text.length() - 1] == '\n')
        rect.setPosition(temp.findCharacterPos(old_text.back().text.length() - 1).x, temp.findCharacterPos(old_text.back().text.length() - 1).y);
    else
        rect.setPosition(MyText.last_x, MyText.last_y);

    rect.setTexture(&cursor);
    sf::Clock timer;
    float add = 0.8;
    bool reverse = true;

    while (!sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Backspace) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter)) {
        sf::sleep(sf::milliseconds(1));
        handleEvents();
        window->clear();
        MyText.TextEngine::printOld();

        if (draw == true) {
            CalculateAnimForCursor(&timer, &rect, &add, &reverse);
            window->draw(rect);
        }
        window->display();
    }
    //cursor_move.play();
    sf::sleep(sf::milliseconds(20));
}

void pause(int type, bool draw)
{
    sf::RectangleShape rect(sf::Vector2f(60, 60));
    rect.setPosition(window_w - DEFAULT_X, window_h - DEFAULT_X);

    rect.setTexture(&cursor);
    sf::Clock timer;
    float add = 0.8;
    bool reverse = true;

    while (!sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Backspace) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Enter)) {
        sf::sleep(sf::milliseconds(1));
        handleEvents();
        window->clear();
        MyText.TextEngine::printOld();

        if (draw == true) {
            CalculateAnimForCursor(&timer, &rect, &add, &reverse);
            window->draw(rect);
        }
        window->display();
    }
    selection.play();
    sf::sleep(sf::milliseconds(20));
}

void sleep(int delay) {
    sf::Clock timer;

    while (1) {
        handleEvents();

        if (timer.getElapsedTime() >= sf::milliseconds(delay))
            break;
    }
}

void fadeIn() {
    sf::Clock timer; int i = 255;

    while (1) {
        handleEvents();

        if (timer.getElapsedTime() > sf::milliseconds(1)) {
            window->clear();

            MyText.printOld();

            fade.setFillColor(sf::Color(0, 0, 0, i));

            window->draw(fade);
            window->display();

            i = i - 5;

            if (i <= 0)
                break;

            timer.restart();
        }
    }
}

void fadeOut() {
    sf::Clock timer; int i = 0;

    while (1) {
        handleEvents();

        if (timer.getElapsedTime() > sf::milliseconds(1)) {
            window->clear();

            MyText.printOld();

            i = i + 5;

            fade.setFillColor(sf::Color(0, 0, 0, i));

            window->draw(fade);
            window->display(); 

            if (i >= 255)
                break;

            timer.restart();
        }
    }
}

void getInput(int ask) {
    sf::Event event;
    input = "";

    if (ask == 0) {
        newline();
        MyText.printText(inputQ[rand() % 6], 50, YELLOW);
    }

    isChoice = true;

    while (isChoice) {
        handleEvents();
    }

    input = lowercase(input);

    newline();
    newline();

    letterCount = 0;
}

void newline() {
    MyText.printText("\n", 0);
    MyText.last_x = DEFAULT_X;
}