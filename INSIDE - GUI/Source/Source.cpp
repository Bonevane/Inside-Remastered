#include "Components.h"

int main()
{
    
    float allowed_window_w = sf::VideoMode::getDesktopMode().width, allowed_window_h = sf::VideoMode::getDesktopMode().height;
    sf::RenderWindow win(sf::VideoMode(allowed_window_w, allowed_window_h, sf::VideoMode::getDesktopMode().bitsPerPixel), "INSIDE", sf::Style::Fullscreen);
    window = &win;

    sf::View view(sf::Vector2f(window_w / 2, window_h / 2), sf::Vector2f(1920.0f, 1080.0f));
    window->setView(view);

    auto image = sf::Image{};
    image.loadFromFile("logo.png");
    window->setIcon(image.getSize().x, image.getSize().y, image.getPixelsPtr());

    window->clear(sf::Color::Black);

    cursor.loadFromFile("CURSOR.png");
    cursor.setSmooth(true);

    window->setFramerateLimit(30);
    window->setVerticalSyncEnabled(true);
    window->setMouseCursorVisible(false);

    initFont();
    initMusic();

    splash();
    menu();

    switch (level) {
    case 0:
        prologue();
        levels(0);
    case 1:
        levels(1);
        mem_1e();
    case 2:
        levels(2);
        mem_2e();
    case 3:
        levels(3);
        memory_4();
    case 4:
        levels(4);
    default:
        MyText.printText("An error has occured and the program has to exit.", 80); pause(1);
        exit(1);
    }

    return 0;
}