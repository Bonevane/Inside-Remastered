#pragma once
#include "../Source/Components.h"


// Struct to store directional text data (with location ID for our ease)
struct lookText {
	std::string north;
	std::string south;
	std::string east;
	std::string west;
	int location;
};

// Struct to store location descriptions (with location ID for our ease)
struct text {
	std::string text[5];
	int location;
};

// Others
extern std::string inputQ[6];
extern std::string checkText[6];
extern std::string moveFail[6];
extern int choiceQ;
extern int level;

// Puzzle
extern sf::RectangleShape pipes;
extern sf::RectangleShape pipes_glass;
extern sf::RectangleShape pipeA;
extern sf::RectangleShape pipeB;
extern sf::RectangleShape pipeC;
extern sf::RectangleShape pipeD;
extern sf::Texture pipesTex;
extern sf::Texture pipes_glassTex;
extern sf::Texture pipeATex;
extern sf::Texture pipeBTex;
extern sf::Texture pipeCTex;
extern sf::Texture pipeDTex;
extern bool print_PIPES;


// Item PNGs
extern int PNGNumber;
extern sf::RectangleShape moon;
extern sf::Texture moonTex;
extern bool print_Moon;
extern sf::RectangleShape couple;
extern sf::Texture coupleTex;
extern bool print_couple;
extern sf::RectangleShape polaroid;
extern sf::Texture polaroidTex;
extern bool print_Polaroid;


// General text and map related stuff
extern int maps[5][20][20];
extern int tempMap[20][20];
extern text info[][25];
extern lookText directions[][25];
extern std::string describeText[][25];
extern std::string points[][25];
extern bool locationFlags[][25];
extern int mapSize[];
extern std::string checkT[5][25];
extern bool hadEnemyEncounter;

// Saving and Loading!
int save();
int load();

//HUD
extern bool print_HUD;
extern bool print_EnemyHUD;
extern int something_ALPHA;
void printHUD();
void printEnemyHUD();
void printItemPNG(int ItemID);


//Levels
void levels(int lev);
void events();
void actions();
void loadLevelData();
void loadLevelPrologue();
void levelPrologue();
extern int xpos, ypos, location, interest;
extern bool readNote[8];
extern bool tutorialTips[10];
extern bool isPrologue;


//Level 0
void level_0(int* level);
void checkPos_0(int location);



//Level 1
void level_1(int* level);
void checkPos_1(int* location);

extern int bookCount;
extern bool inserted;
extern bool enemy_1a;
extern int Level1_Temp;



//Level 2
int safe();
void note();
void note_2();
void note_5();
void level_2pre();
void level_2(int* level);
void checkPos_2(int* location, int x, int y);

extern bool enemy_2a;
extern bool enemy_2b;
extern bool enemy_2c;
extern bool locked;



//Level 3
void level_3pre();
void level_3(int* level);
void checkPos_3(int location, int x, int y);
int puzzle1();
void note_3();
void note_4();
void note_6();
void note_7();
void note_8();
void note_9();
extern bool puzzle;
extern bool mus3;

extern bool enemy_3a;
extern bool enemy_3b;
extern bool lock_side1;
extern bool lock_side2;


//Level 4
void level_4(int* level);
void checkPos_4(int location);
