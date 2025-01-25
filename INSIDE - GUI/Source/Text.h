#pragma once
#include "Components.h"

extern sf::RenderWindow* window;
extern sf::Font font;
extern sf::Font font_cascadia;
extern sf::Font font_gothic;
extern sf::Font font_georgia;
extern sf::Font font_8bit;
extern int FONT_SIZE;

extern sf::Texture cursor;
extern sf::Vector2f last_xy;

// set the window's view to a fixed area
extern sf::Vector2u window_size;
extern unsigned int window_w;
extern unsigned int window_h;
extern unsigned int MID_X;
extern unsigned int MID_Y;
extern unsigned int DEFAULT_X;
extern unsigned int DEFAULT_Y;
extern unsigned int TOP_MID_Y;
extern unsigned int BOTTOM_MID_Y;

extern sf::RectangleShape fade;

extern int TEXT_PAD;
extern bool fullscreen;

extern std::string input;
extern bool isChoice;
extern std::string character;
extern int letterCount;

//User Interface
void initFont();
void handleEvents();
int printCursor(int x, int y);
void CalculateAnimForCursor(sf::Clock* timer, sf::RectangleShape* rect, float* add, bool* reverse);

//Text
void pause(bool draw = true);
void pause(int type, bool draw = true);
void sleep(int delay);
void fadeIn();
void fadeOut();
void getInput(int ask = 0);
void newline();

//HUD
void printHUD();

enum COLORS {
    WHITE,
    RED,
    BLUE,
    GREEN,
    YELLOW,
    GREY,
    FULL_WHITE
};

enum STYLE {
    NORMAL,
    BOLD,
    ITALIC,
    B_ITALIC
};

enum FONTS {
    RODIN,
    CASCADIA,
    GOTHIC,
    GEORGIA,
    BIT
};

struct CURRENT {
    std::string text;
    int ID = WHITE;
    int x = 100;
    int y = 100;
    int text_size = 24;
    int STYLE = NORMAL;
    int FONT = RODIN;
};

extern std::vector<CURRENT> old_text;

class TextEngine {
public:
    CURRENT current;
    int index;
    float last_x;
    float last_y;

    void currentToOld();

    void setColor(sf::Text* text, int ID, int STYLE, int FONT);

    void printOld();

    void printCurrent(CURRENT* current, int delay, int color = WHITE, int MIDDLE_X = 0, int MIDDLE_Y = 0, bool CONTINUE = true, bool push = false);

    void printText(std::string text, int delay, int color = WHITE, int x = DEFAULT_X, int y = DEFAULT_Y, int MIDDLE_X = 0, int MIDDLE_Y = 0, int size = FONT_SIZE, bool push = false, int STYLE = NORMAL, int FONT = RODIN);

    void clearOld();

    void textWrap();
};



extern TextEngine MyText;
extern TextEngine tutorial;