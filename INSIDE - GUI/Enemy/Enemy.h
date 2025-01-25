#pragma once
#include "../Source/Components.h"

void Puzzle_1();

struct enem {
	std::string name;
	int damage;
	int heal;
	int health;
	bool defeat = false;
};

int enemy(int difficulty = 0);
int attack(bool *pbuff);
bool defend(int delay = 30);
void enemyAttack(bool* defend, bool* buff);
void game_over();

//extern std::string enemies[10];
extern int name, playerHealth, playerDMG, playerHeal, MAX_HEALTH, enemyHealth, chances, playerHealth_ORIGINAL, enemyHealth_ORIGINAL;
extern enem enemies[];

extern sf::RectangleShape attack_bar;
extern sf::RectangleShape attack_cursor;
extern sf::RectangleShape something;
extern sf::RectangleShape something_more;
extern sf::Texture attack_barTex;
extern sf::Texture attack_cursorTex;
extern sf::Texture somethingTex;
extern sf::Texture something_moreTex;

void boss();
void used_Knife();

//Simple Lock and Key

//Smth like a library section with books(?)

//Smth like a deciphering thinger

//Smth like switches of some sort(?)