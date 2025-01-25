#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class Typewriter {
public:
    Typewriter(sf::RenderWindow& window, const sf::Font& font, unsigned int fontSize)
        : window(window), font(font), fontSize(fontSize) {
        text.setFont(font);
        text.setCharacterSize(fontSize);
        text.setFillColor(sf::Color::White);
        text.setPosition(10.0f, 10.0f);
    }

    void addText(const std::string& newText) {
        targetText = newText;
        currentText = "";
        currentIndex = 0;
        updateText();
    }

    void updateText() {
        text.setString(currentText);
    }

    void draw() {
        window.clear();
        window.draw(text);
        window.display();
    }

    bool isAnimationComplete() const {
        return currentIndex >= targetText.size();
    }

    void animate() {
        if (!isAnimationComplete()) {
            currentText += targetText[currentIndex];
            currentIndex++;
            updateText();
        }
    }

private:
    sf::RenderWindow& window;
    const sf::Font& font;
    unsigned int fontSize;
    std::string currentText;
    std::string targetText;
    std::size_t currentIndex;
    sf::Text text;
};

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Typewriter Example");
    sf::Font font;

    // Load a font
    if (!font.loadFromFile("CascadiaMono.ttf")) {
        std::cerr << "Error loading font!" << std::endl;
        return 1;
    }

    Typewriter typewriter(window, font, 24);

    typewriter.addText("Hello, this is a typewriter text!");
    typewriter.draw();
    sf::sleep(sf::seconds(1)); // Optional delay for better visualization

    while (!typewriter.isAnimationComplete()) {
        typewriter.animate();
        typewriter.draw();
        sf::sleep(sf::milliseconds(100)); // Adjust the speed by changing the sleep duration
    }

    typewriter.addText("This is the second line of text.");
    typewriter.draw();
    sf::sleep(sf::seconds(1));

    while (!typewriter.isAnimationComplete()) {
        typewriter.animate();
        typewriter.draw();
        sf::sleep(sf::milliseconds(100));
    }

    typewriter.addText("And here is the third line.");
    typewriter.draw();
    sf::sleep(sf::seconds(1));

    while (!typewriter.isAnimationComplete()) {
        typewriter.animate();
        typewriter.draw();
        sf::sleep(sf::milliseconds(100));
    }

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        typewriter.draw();
    }

    return 0;
}
















/*#include <iostream>
#include <SFML/Graphics.hpp>
#include <windows.h>

int textSize = 24;
int text_space_x = 100, text_space_y = 100;



void clear();


void printText(std::string stuff, sf::RenderWindow* window)
{


    sf::Clock timer;
    unsigned int character = 0;
    int size = stuff.size()-1;

    sf::Font font;
    if (!font.loadFromFile("CascadiaMono.ttf"))
    {
        std::cout << "Could not load the font file." << std::endl;
    }

    sf::Text text("", font, 24);


    while (character <= size)
    {
        text.setPosition(text_space_x, text_space_y);

        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window->pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window->close();

            if (event.type == sf::Event::Resized)
            {
                // update the view to the new size of the window
                sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
                window->setView(sf::View(visibleArea));
            }

        }





        if (timer.getElapsedTime() > sf::milliseconds(100) && character < stuff.size())
        {
            timer.restart();
            text.setString(sf::String(stuff.substr(character, 1)));
            character++;
            text_space_x += 24;

            window->draw(text);
            window->display();
        }

        //window->clear();
        
    }

    text_space_x = 100;
    text_space_y = 100;
}


int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(1200, 600), "My window");

    sf::Vector2u size; unsigned int width, height;

    window.clear(sf::Color::Black);
    window.setFramerateLimit(60);

    // run the program as long as the window is open
    while (window.isOpen())
    {

        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
            
            if (event.type == sf::Event::Resized)
            {
                // update the view to the new size of the window
                sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
                window.setView(sf::View(visibleArea));
            }

        }



        

        printText("Bruh momento", &window);

        printText("ok next line", &window);

        window.clear();
        
        //printText("Bruh Momento", &window);
        
        // draw everything here...
        // window.draw(...);

        // end the current frame
        //window.display();
    }

    return 0;
}*/



/*int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML window");

    // Create a graphical text to display
    sf::Font font;
    if (!font.loadFromFile("CascadiaMono.ttf"))
        return EXIT_FAILURE;
    sf::Text text("", font, 50);

    sf::Clock timer;
    unsigned int character = 0;
    std::string str = "This is an example of typewriter \neffect, it uses one clock to control \nthe time. Check out the code, it's \neasy to understand!";

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed || (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
                window.close();

            if (event.type == sf::Event::Resized)
            {
                // update the view to the new size of the window
                sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
                window.setView(sf::View(visibleArea));
            }
        }

        if (timer.getElapsedTime() > sf::milliseconds(100) && character < str.size())
        {
            timer.restart();
            character++;
            text.setString(sf::String(str.substr(0, character)));
        }

        // Clear screen
        window.clear();

        // Draw the string
        window.draw(text);

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}*/