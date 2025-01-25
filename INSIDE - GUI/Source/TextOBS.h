#pragma once

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <string>

sf::RenderWindow* window = nullptr;
sf::Font* font = nullptr;
const int OLDS = 10;
int FONT_SIZE = 24;

sf::Sound dialogue;		sf::SoundBuffer buffer;

void handleEvents();

void pause();

enum COLORS {
    WHITE,
    RED,
    BLUE,
    GREEN,
    YELLOW,
    GREY
};

struct OLDTEXT {
    std::string text;
    int ID;
};

struct CURRENT {
    std::string text;
    int ID;
};

std::vector<OLDTEXT> old_text;

class TextEngine {
public:
    OLDTEXT oldtext[OLDS];
    CURRENT current;
    int xloc;
    int yloc;
    int index;
    int amount;

    void currentToOld()
    {
        if (amount != OLDS) {
            oldtext[amount].text = current.text;
            oldtext[amount].ID = current.ID;
        }

        current.text = "";
        current.ID = 0;
        amount++;
    }

    void printOld() {

        sf::Text text("", *font, FONT_SIZE);
        int i = 0;

        index = 0;

        while (i < OLDS) {
            if (oldtext[i].text != "") {
                text.setString(oldtext[i].text);
                text.setPosition(xloc, yloc + (index * (FONT_SIZE + 2)));
                index++;

                switch (oldtext[i].ID) {
                case WHITE:
                    text.setFillColor(sf::Color::White);
                    break;
                case BLUE:
                    text.setFillColor(sf::Color::Blue);
                    break;
                case YELLOW:
                    text.setFillColor(sf::Color::Yellow);
                    break;
                case GREEN:
                    text.setFillColor(sf::Color::Green);
                    break;
                case RED:
                    text.setFillColor(sf::Color::Red);
                    break;
                case GREY:
                    text.setFillColor(sf::Color::Color(128, 128, 128, 255));
                    break;
                default:
                    break;
                }

                // Draw the string
                window->draw(text);
            }
            i++;
        }
    }

    void printCurrent(CURRENT* current, int delay, int color = WHITE) {

        sf::Clock timer;
        unsigned int character = 0;
        int size = current->text.size();

        buffer.loadFromFile("Music/dialogue.wav");
        dialogue.setBuffer(buffer);
        dialogue.setVolume(4);


        sf::Text text("", *font, FONT_SIZE);

        switch (current->ID) {
        case WHITE:
            text.setFillColor(sf::Color::White);
            break;
        case BLUE:
            text.setFillColor(sf::Color::Blue);
            break;
        case YELLOW:
            text.setFillColor(sf::Color::Yellow);
            break;
        case GREEN:
            text.setFillColor(sf::Color::Green);
            break;
        case RED:
            text.setFillColor(sf::Color::Red);
            break;
        case GREY:
            text.setFillColor(sf::Color::Color(128, 128, 128, 255));
            break;
        default:
            break;
        }

        while (character < size && window->isOpen())
        {
            handleEvents();


            if (timer.getElapsedTime() > sf::milliseconds(delay) && character < current->text.size())
            {
                // Clear screen
                window->clear(sf::Color::Black);

                // Draw the old text
                printOld();

                dialogue.play();

                timer.restart();
                character++;
                text.setString(sf::String(current->text.substr(0, character)));
                text.setPosition(xloc, yloc + (index * (FONT_SIZE + 2)));

                // Draw the current text
                window->draw(text);

                // Update the window
                window->display();
            }
        }

        currentToOld();
    }

    void printText(std::string text, int delay, int color = WHITE)
    {
        current.text = text;
        current.ID = color;
        printCurrent(&current, delay, color);
    }

    void clearOld() {

        for (int i = 0; i < OLDS; i++) {
            oldtext[i] = { "", 0 };
        }
        index = 0;
        amount = 0;
    }
};