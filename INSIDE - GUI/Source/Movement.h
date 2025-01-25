#pragma once
#include "Components.h"

//Function Prototypes for "Movement"
void computeInput();
void check(int location, int level);
void displayPos(int location, std::string points[][25], int level);
void displayDirections(int x, int y, int level);
void updateMap(int x, int y);
void clearMap();
void initMap();
void printMap();
int inputID(std::string input);
std::string lowercase(std::string input);

extern sf::RectangleShape mapText;
extern sf::Texture mapImg;
extern sf::RectangleShape compassTex;
extern sf::Texture compasImg;

extern bool print_MAP;


//Enumeration for our ease of use.
enum inputs
{
	NORTH = 1,
	SOUTH,
	EAST,
	WEST,
	LOOKNORTH,
	LOOKEAST,
	LOOKSOUTH,
	LOOKWEST,
	DIRECTIONS,
	EXIT,
	CLEAR,
	ATTACK,
	MOVE,
	LOOK,
	DESCRIBE,
	MAP,
	PLACE,
	PICK,
	INTERACT,
	CHECK,
	JUMP,
	OPEN,
	DEFEND,
	FOCUS,
	ITEMS,
	HELP,
	STATS,
	SAVE,
	LOAD,
	YELL,
	SLEEP,
	CREDITS,
	PICK_KEY,
	PICK_BOOK,
	USE_KEY,
	USE,
	INSERT,
	READ,
	QUIT,
	KMS,
	SEK,
	GAE,
	CUSS,
	DANCE,
	SIT
};