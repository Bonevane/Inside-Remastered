#include "Menu.h"

void menu() {

    music_menu.play(); int cursor_x, cursor_y, pos, button; bool start = false;

    MyText.printText("I  N  S  I  D  E", 0, RED, 0, TOP_MID_Y, 1, 0, 80, true, 0, CASCADIA);
    MyText.printText("Press [Backspace] to continue", 0, GREY, 0, BOTTOM_MID_Y, 1, 0, 18, true, 0, CASCADIA);

    fadeIn();

    while (!sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace)) {
        handleEvents();
    }

    selection.play();
    MyText.clearOld();
    sleep(50);

    MyText.printText("I  N  S  I  D  E", 0, RED, 0, TOP_MID_Y, 1, 0, 80, true, 0, CASCADIA);
    MyText.printText("Start", 80, WHITE, 0, MID_Y + (FONT_SIZE * 5), 1, 0, 20, false, 0, CASCADIA);
    MyText.printText("Credits", 80, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0, 20, false, 0, CASCADIA);
    MyText.printText("Exit", 80, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0, 20, false, 0, CASCADIA);


    cursor_x = MID_X - 100;
    cursor_y = MID_Y + (FONT_SIZE * 5);
    pos = 0;

    while (start == false) {
        handleEvents();

        MyText.clearOld();
        MyText.printText("I  N  S  I  D  E", 0, RED, 0, TOP_MID_Y, 1, 0, 80, true, 0, CASCADIA);
        MyText.printText("Start", 80, WHITE, 0, MID_Y + (FONT_SIZE * 5), 1, 0, 20, true, 0, CASCADIA);
        MyText.printText("Credits", 80, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0, 20, true, 0, CASCADIA);
        MyText.printText("Exit", 80, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0, 20, true, 0, CASCADIA);

        button = printCursor(cursor_x, cursor_y);
        sleep(200);

        switch (button) {
        case 0:
            if (pos > 0) {
                pos--;
                cursor_y -= (2 * FONT_SIZE);
            }
            break;
        case 1:
            if (pos < 2) {
                pos++;
                cursor_y += (2 * FONT_SIZE);
            }
            break;
        case 2:
            if (pos == 0)
                start = true;
            else if (pos == 1) {
                fadeOut();
                for (float i = 100; i >= 0; i--)
                {
                    music_menu.setVolume(i);
                    sleep(18);
                } music_menu.stop();
                credits_good();
                music_menu.play();
                for (float i = 0; i < 100; i++)
                {
                    music_menu.setVolume(i);
                    sleep(18);
                } 
            }
            else if (pos == 2)
                exit(1);
            break;
        }
    }

    cursor_x = MID_X - 100;
    cursor_y = MID_Y + (FONT_SIZE * 5);
    pos = 0; start = false;

    MyText.clearOld();
    MyText.printText("I  N  S  I  D  E", 0, RED, 0, TOP_MID_Y, 1, 0, 80, true, 0, CASCADIA);
    MyText.printText("Continue", 80, WHITE, 0, MID_Y + (FONT_SIZE * 5), 1, 0, 20, false, 0, CASCADIA);
    MyText.printText("New Game", 80, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0, 20, false, 0, CASCADIA);

    while (start == false) {
        handleEvents();

        MyText.clearOld();
        MyText.printText("I  N  S  I  D  E", 0, RED, 0, TOP_MID_Y, 1, 0, 80, true, 0, CASCADIA);
        MyText.printText("Continue", 80, WHITE, 0, MID_Y + (FONT_SIZE * 5), 1, 0, 20, true, 0, CASCADIA);
        MyText.printText("New Game", 80, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0, 20, true, 0, CASCADIA);

        button = printCursor(cursor_x, cursor_y);
        sleep(200);

        switch (button) {
        case 0:
            if (pos > 0) {
                pos--;
                cursor_y -= (2 * FONT_SIZE);
            }
            break;
        case 1:
            if (pos < 1) {
                pos++;
                cursor_y += (2 * FONT_SIZE);
            }
            break;
        case 2:
            if (pos == 0) {
                start = true;
            }
            else if (pos == 1) {
                start = true;
            }
            break;
        }
    }

    fadeOut();
    for (float i = 100; i >= 0; i--)
    {
        music_menu.setVolume(i);
        sleep(18);
    } music_menu.stop();
    MyText.clearOld();

    if (pos == 0)
        if(load() == 1)
            new_game();

    if (pos == 1)
        new_game();
}

void splash() {
    MyText.printText("INSIDE is best experienced with Audio", 0, WHITE, 0, 0, 1, 1, FONT_SIZE + 4, true, 0);

    fadeIn();

    pause(1);

    fadeOut();

    MyText.clearOld();

    sleep(2000);
}

void new_game() {
    MyText.clearOld();

    MyText.printText("Interacting with the game world is essential for progressing in INSIDE.", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, true);
    sleep(2000);
    fadeIn(); pause(1); fadeOut(); MyText.clearOld();

    sleep(2000);
}


void prologue() {
    sf::Music music;
    music.openFromFile("Music/mus_cymbal.ogg");

    sf::RectangleShape rect(sf::Vector2f(window_w, window_h));
    int i = 0; int count = 0;

    MyText.clearOld();

    MyText.printText("Hey Nell.", 90, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
    MyText.printText("It's me, Mark.", 90, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
    MyText.printText("I just wanted to check in on you.", 90, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
    MyText.printText("...", 90, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
    MyText.printText("I heard about Adrian...", 90, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
    MyText.printText("I know it's been tough, Nell.", 90, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
    MyText.printText("How are you holding up?", 90, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
    MyText.printText("No, it was not your fault.", 80, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
    MyText.printText("You can't blame yourself for it.", 90, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
    MyText.printText("...", 90, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
    MyText.printText("Hey Nell?", 100, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
    MyText.printText("Are you still there?", 90, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
    MyText.printText("Are you there Nell?", 100, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
    MyText.printText("Nell?", 150, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();

    sf::Clock timer;

    music.play();

    while (1) {
        window->clear();
        MyText.clearOld();

        if (timer.getElapsedTime() >= sf::milliseconds(0)) {
            MyText.printText("N", 0, FULL_WHITE, MID_X - (rand() % 10) - 100 - 8, MID_Y - 12 + (rand() % 10), 0, 0, FONT_SIZE, true);
        }

        if (timer.getElapsedTime() >= sf::milliseconds(1000)) {
            MyText.printText("E", 0, FULL_WHITE, MID_X - (rand() % 10) - 50 - 8, MID_Y - 12 + (rand() % 10), 0, 0, FONT_SIZE, true);
        }

        if (timer.getElapsedTime() >= sf::milliseconds(2000)) {
            MyText.printText("L", 0, FULL_WHITE, MID_X - (rand() % 10), MID_Y - 12 + (rand() % 10), 0, 0, FONT_SIZE, true);
        }

        if (timer.getElapsedTime() >= sf::milliseconds(3000)) {
            MyText.printText("L", 0, FULL_WHITE, MID_X - (rand() % 10) + 50, MID_Y - 12 + (rand() % 10), 0, 0, FONT_SIZE, true);
        }

        if (timer.getElapsedTime() >= sf::milliseconds(4000)) {
            MyText.printText("?", 0, FULL_WHITE, MID_X - (rand() % 10) + 100, MID_Y - 12 + (rand() % 10), 0, 0, FONT_SIZE, true);
        }

        if (timer.getElapsedTime() >= sf::milliseconds(5000))
            break;

        if (timer.getElapsedTime() >= sf::milliseconds(count)) {
            rect.setFillColor(sf::Color(255, 255, 255, i));
            count += 40;
            i += 2;
        }

        MyText.printOld();

        window->draw(rect);
        window->display();
        sleep(30);
    }

    window->clear();
    window->display();
    MyText.clearOld();
}

void help() {

    MyText.clearOld(); newline();

    MyText.printText("Movement Commands:", 50, YELLOW, DEFAULT_X, DEFAULT_Y, 0, 0, FONT_SIZE, false, BOLD); newline(); //newline();

    MyText.printText("- Move:  ", 50); MyText.printText("\tMoves in the provided [Direction].", 50, GREY); newline();
    MyText.printText("- Look:  ", 50); MyText.printText("\tLooks in the provided [Direction].", 50, GREY); newline(); newline();

    MyText.printText("[Direction]", 50, YELLOW); MyText.printText(" can be North, South, East, or West.", 50); newline(); newline();

    MyText.printText("Combat Options:", 50, YELLOW, DEFAULT_X, DEFAULT_Y, 0, 0, FONT_SIZE, false, BOLD); newline(); //newline();

    MyText.printText("- Attack:  ", 50); MyText.printText("\tDeals a normal attack, unless focused.", 50, GREY); newline();
    MyText.printText("- Defend:  ", 50); MyText.printText("\tDefends against the enemy's attack with a chance of healing.", 50, GREY); newline();
    MyText.printText("- Focus:  ", 50); MyText.printText("\tCharges your next attack, and gives a chance to dodge current attack.", 50, GREY); newline(); newline();

    MyText.printText("You can use ", 50); MyText.printText("[Right Shift] ", 50, YELLOW); MyText.printText("to skip dialogue, or to land an attack.", 50);

    MyText.printText("< 1 / 2 >", 20, WHITE, 0, window_h - (window_h / 6), 1, 0); pause(1); 
    
    MyText.clearOld(); newline();

    MyText.printText("General Commands:", 50, YELLOW, DEFAULT_X, DEFAULT_Y, 0, 0, FONT_SIZE, false, BOLD); newline(); newline();

    MyText.printText("- Check:  ", 50); MyText.printText("\tChecks your surrounding for info, or items.", 50, GREY); newline();
    MyText.printText("- Interact:  ", 50); MyText.printText("\tInteracts with objects in the game world.", 50, GREY); newline();
    MyText.printText("- Help:  ", 50); MyText.printText("\tPrints out help...Oh you already used this command.", 50, GREY); newline();
    MyText.printText("- Save:  ", 50); MyText.printText("\tSaves your current progress.", 50, GREY); newline();
    MyText.printText("- Describe:  ", 50); MyText.printText("\tGives a description of your surroundings again.", 50, GREY); newline();
    MyText.printText("- Map:  ", 50); MyText.printText("\tDisplays a map of your current position.", 50, GREY); newline();
    MyText.printText("- Pick:  ", 50); MyText.printText("\tPicks up in-game objects, if applicable.", 50, GREY); newline();
    MyText.printText("- Place:  ", 50); MyText.printText("\tPlaces objects from your inventory, if applicable.", 50, GREY); newline();
    MyText.printText("- Open / Enter:  ", 50); MyText.printText("\tOpen or enter doors.", 50, GREY); newline();
    MyText.printText("- Quit:  ", 50); MyText.printText("\tExits the game.", 50, GREY); newline(); //newline();

    //MyText.printText("Other commands may be applicable in certain situations.", 50, YELLOW);

    MyText.printText("< 2 / 2 >", 20, WHITE, 0, window_h - (window_h / 6), 1, 0); pause(1); MyText.clearOld();
}