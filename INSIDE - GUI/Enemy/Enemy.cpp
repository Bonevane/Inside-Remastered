#include "Enemy.h"
#include <string>

// Enemies data
//Name //Attack //Heal Chance // Health
enem enemies[6] = { {"Thanatophobia", 25, -10, 50}, {"Dementophobia", 5, 0, 150}, {"Nyctophobia", 10, 10, 100}, {"Eremophobia", 10, 0, 150}, {"Acrophobia", 15, 16, 100}};


// General variables
int name = 0, playerHealth = 100, playerDMG, playerHeal, MAX_HEALTH = 100, enemyHealth = 100, chances = 5, playerHealth_ORIGINAL = 100, enemyHealth_ORIGINAL = 100;

sf::RectangleShape attack_bar(sf::Vector2f(800.0f, 800.0f));
sf::RectangleShape attack_cursor(sf::Vector2f(800.0f, 800.0f));
sf::RectangleShape something(sf::Vector2f((float)window_w, (float)window_h));
sf::RectangleShape something_more(sf::Vector2f((float)window_w, (float)window_h));
sf::Texture attack_barTex;
sf::Texture attack_cursorTex;
sf::Texture somethingTex;
sf::Texture something_moreTex;


// The enemy function lets go
int enemy(int difficulty)
{
	int damage, random, healVal, cursor_x, cursor_y, pos, button;
	bool enemyAlive, defence, buff, pbuff;
	std::string temp;

	attack_cursorTex.loadFromFile("Enemy/attack_cursor.png");
	somethingTex.loadFromFile("Enemy/something.png");
	something_moreTex.loadFromFile("Enemy/something_more.png");
	something.setTexture(&somethingTex);
	something_more.setTexture(&something_moreTex);

	hadEnemyEncounter = true;

	while (chances >= 0) {
		print_EnemyHUD = true;

		playerDMG = 8, playerHeal = 10;

		// ITEM BUFFS
		if (hasSketch)
			MAX_HEALTH = 120;

		if (hasBPrint)
			playerHeal = 150;

		if (hasReport)
			MAX_HEALTH = 150;

		if (hasAxe)
			playerDMG = 12;

		if (hasKnife)
			playerDMG = 15;

		playerHealth = MAX_HEALTH; playerHealth_ORIGINAL = MAX_HEALTH;

		isChoice = false; enemyAlive = true; defence = false; buff = false; pbuff = false;

		name = (rand() % 3) + difficulty;

		enemyHealth = enemies[name].health; enemyHealth_ORIGINAL = enemies[name].health;	MyText.clearOld();

		MyText.printText("You are being attacked", 50, RED, 0, 0, 1, 1); pause(1); MyText.clearOld();

		cursor_x = MID_X - 100;
		cursor_y = MID_Y + (FONT_SIZE * 1);
		pos = 0; button = 0;

		MyText.printText("What will you do:\n\n", 50, YELLOW, 0, 0, 1, 1);
		MyText.printText("Attack", 50, WHITE, 0, MID_Y + (FONT_SIZE * 1), 1, 0);
		MyText.printText("Defend", 50, WHITE, 0, MID_Y + (FONT_SIZE * 3), 1, 0);
		MyText.printText("Focus", 50, WHITE, 0, MID_Y + (FONT_SIZE * 5), 1, 0);

		while (enemyAlive) {
			handleEvents();
			MyText.clearOld();

			if(button == 2)
				MyText.printText("What will you do:\n\n", 50, YELLOW, 0, 0, 1, 1, FONT_SIZE);
			else
				MyText.printText("What will you do:\n\n", 50, YELLOW, 0, 0, 1, 1, FONT_SIZE, true);
			MyText.printText("Attack", 50, WHITE, 0, MID_Y + (FONT_SIZE * 1), 1, 0, FONT_SIZE, true);
			MyText.printText("Defend", 50, WHITE, 0, MID_Y + (FONT_SIZE * 3) , 1, 0, FONT_SIZE, true);
			MyText.printText("Focus", 50, WHITE, 0, MID_Y + (FONT_SIZE * 5), 1, 0, FONT_SIZE, true);

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
				if (pos == 0) {
					damage = attack(&pbuff);

					if (rand() % 100 >= 95)
					{
						MyText.printText("You land a critical hit!", 50, GREEN, 0, 0, 1, 1); pause(1); MyText.clearOld();
						damage = (int)(damage * 2);
					}


					if (damage > 0)
					{
						if (hasKnife == true) {
							MyText.printText("You used your knife.", 50, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
							temp = "You dealt " + std::to_string(damage) + " damage to the enemy.";
							MyText.printText(temp, 50, WHITE, 0, 0, 1, 1); pause(1); MyText.clearOld();
							enemyHealth -= damage;
						}
						else if (hasAxe == true)
						{
							MyText.printText("You used your axe.", 50, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
							temp = "You dealt " + std::to_string(damage) + " damage to the enemy.";
							MyText.printText(temp, 50, WHITE, 0, 0, 1, 1); pause(1); MyText.clearOld();
							enemyHealth -= damage;
						}
						else
						{
							MyText.printText("You used your hands.", 50, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
							temp = "You dealt " + std::to_string(damage) + " damage to the enemy.";
							MyText.printText(temp, 50, WHITE, 0, 0, 1, 1); pause(1); MyText.clearOld();
							enemyHealth -= damage;
						}

						if (enemyHealth <= 0)
						{
							enemyHealth = 0;
							enemyAlive = false;
							break;
						}
					}
					else {
						MyText.printText("You missed...", 50, WHITE, 0, 0, 1, 1); pause(1); MyText.clearOld();
					}

					enemyAttack(&defence, &buff);
				}
					
				else if (pos == 1) {
					MyText.clearOld();
					MyText.printText("You defend yourself. The damage taken will be reduced this round.", 50, WHITE, 0, 0, 1, 1); defence = true; pause(1); MyText.clearOld();

					random = rand() % 100;

					if (random >= 20 + playerHeal)
					{
						healVal = (rand() % 10) + playerHeal;
						playerHealth += healVal;

						if (playerHealth > 100)
							playerHealth = 100;

						temp = "Your defence stance allowed you to heal yourself. You healed " + std::to_string(healVal) + " HP.";
						MyText.printText(temp, 50, WHITE, 0, 0, 1, 1); pause(1); MyText.clearOld();
					}

					if (defend() == true) {
						MyText.printText("You completely blocked the enemy attack!", 50, GREEN, 0, 0, 1, 1); pause(1); MyText.clearOld();
					}
						
					else
						enemyAttack(&defence, &buff);

					defence = false; buff = false;
				}

				else if (pos == 2) {
					MyText.clearOld();
					MyText.printText("You decided to Focus. Your next attack will deal more damage.", 50, YELLOW, 0, 0, 1, 1); pause(1); MyText.clearOld();
					pbuff = true;

					if (defend(40) == true) {
						MyText.printText("You managed to evade their attack!", 50, GREEN, 0, 0, 1, 1); pause(1); MyText.clearOld();
					}
						
					else
						enemyAttack(&defence, &buff);

					buff = false;
				}
				break;
			default:
				break;
			}

			// Enemy or Player deth check
			if (enemyHealth <= 0) {
				enemyAlive = false;
			}
			else if (playerHealth <= 0) {
				chances--;

				game_over();
				enemyAlive = false;
			}
		}

		if (enemyAlive == false && playerHealth > 0) {
			MyText.printText("You survived.", 50, GREEN, 0, 0, 1, 1); pause(1); fadeOut(); print_EnemyHUD = false; MyText.clearOld();
			return 1;
		}

	}
}


//********************************************************************************************************************************************************************
//********************************************************************************************************************************************************************

void game_over() {

	print_EnemyHUD = false;
	window->clear();
	sleep(1000);

	MyText.printText("GAME OVER", 0, RED, 0, TOP_MID_Y, 1, 0, 60, true, 0, CASCADIA);
	fadeIn();

	if (chances <= 0) {
		music[level].stop(); orrery.stop();

		MyText.printText("This is all just a bad dream...", 80, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0, FONT_SIZE, false, 0, CASCADIA); pause(); MyText.clearOld();
		//music_mem4.play();
		MyText.printText("GAME OVER", 0, RED, 0, TOP_MID_Y, 1, 0, 60, true, 0, CASCADIA);
		MyText.printText("A N D  Y O U ' R E  N E V E R  W A K I N G  U P . . .", 140, RED, 0, MID_Y + (FONT_SIZE * 7), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(6000); exit(1);
	}

	MyText.printText("You died...But you cannot give up just yet!", 80, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0, FONT_SIZE, false, 0, CASCADIA); sleep(1000);
	MyText.printText("Stay Determined!", 80, YELLOW, 0, MID_Y + (FONT_SIZE * 9), 1, 0, FONT_SIZE, false, 0, CASCADIA); pause(1); MyText.clearOld();

	MyText.printText("Chances Left:  ", 80, WHITE, MID_X - (14 * 8), 0, 0, 1, FONT_SIZE); MyText.printText(std::to_string(chances), 80, GREY, DEFAULT_X, DEFAULT_Y, 0, 0); pause(1); fadeOut(); MyText.clearOld();
}


//Player Attack
int attack(bool* pbuff)
{
	bool attack = true, miss = false; int dmg = 1, speed = rand() % 15 + 25;

	attack_barTex.loadFromFile("Enemy/attack_barR.png");
	attack_bar.setTexture(&attack_barTex);
	attack_cursor.setTexture(&attack_cursorTex);

	attack_bar.setPosition(sf::Vector2f((float)(MID_X - 400), (float)(MID_Y - 400)));
	attack_cursor.setPosition(sf::Vector2f((float)(MID_X - 400), (float)(MID_Y - 400)));

	for (int i = 0; i < 800; i+= speed) {
		handleEvents();
		MyText.clearOld();

		attack_cursor.setPosition(sf::Vector2f((float)(MID_X - 400 + i), (float)(MID_Y - 400)));

		window->clear();

		//window->draw(something_more);

		MyText.printText("Press [Right Shift] to attack", 0, GREY, 0, BOTTOM_MID_Y, 1, 0, FONT_SIZE, true);
		MyText.printOld();

		window->draw(attack_cursor);
		window->draw(attack_bar);
		window->display();

		//sleep(speed);

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::RShift))
		{
			if (i > 500)
				dmg = -3 * ((i / 33.3f) - 25);
			else
				dmg = 2 * (i / 33.3f);
			
			break;
		}

		if (i >= 750)
			miss = true;
	}

	dmg = (dmg / 4) + (rand() % (playerDMG - 5) + 5);

	//if (hasAxe == true)
		//dmg = dmg * (playerDMG / 10.0f);

	if (*pbuff == true)
	{
		dmg *= 2;
		*pbuff = false;
	}

	MyText.clearOld();

	if (miss)
		return 0;
	else
		return dmg;
}


//********************************************************************************************************************************************************************
//********************************************************************************************************************************************************************


// Player Defend
bool defend(int delay)
{
	int speed = rand() % 8 + delay; bool blocked = false;

	if(delay == 30)
		attack_barTex.loadFromFile("Enemy/attack_barG.png");
	else
		attack_barTex.loadFromFile("Enemy/attack_barY.png");
	attack_bar.setTexture(&attack_barTex);
	attack_cursor.setTexture(&attack_cursorTex);

	attack_bar.setPosition(sf::Vector2f((float)(MID_X - 400), (float)(MID_Y - 400)));
	attack_cursor.setPosition(sf::Vector2f((float)(MID_X - 400), (float)(MID_Y - 400)));

	for (int i = 0; i < 800; i += speed) {
		handleEvents();
		MyText.clearOld();

		attack_cursor.setPosition(sf::Vector2f((float)(MID_X - 400 + i), (float)(MID_Y - 400)));

		window->clear();

		if(delay == 30)
			MyText.printText("Press [Right Shift] to Defend", 0, GREY, 0, BOTTOM_MID_Y, 1, 0, FONT_SIZE, true);
		else
			MyText.printText("Press [Right Shift] to Focus", 0, GREY, 0, BOTTOM_MID_Y, 1, 0, FONT_SIZE, true);
		MyText.printOld();

		window->draw(attack_cursor);
		window->draw(attack_bar);
		window->display();

		//sleep(speed);

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::RShift))
		{
			if (i >= 340 && i <= 460)
				blocked = true;
			break;
		}
	}

	MyText.clearOld();

	return blocked;
}


//********************************************************************************************************************************************************************
//********************************************************************************************************************************************************************


//Enemy Attack
void enemyAttack(bool* defend, bool* buff)
{
	int damage, random, healP, buffP;

	random = rand() % 100;

	if (*buff == true)
	{
		healP = 0;
		buffP = 0;
	}
	else if (enemyHealth >= 80)
	{
		healP = 0;
		buffP = 20;
	}
	else if (enemyHealth >= 60)
	{
		healP = enemies[name].heal / 2;
		buffP = 15;
	}
	else if (enemyHealth >= 40)
	{
		healP = 10 + (enemies[name].heal / 2);
		buffP = 10;
	}
	else if (enemyHealth >= 20)
	{
		healP = 30 + (enemies[name].heal / 2);
		buffP = 5;
	}
	else
	{
		healP = 40 + (enemies[name].heal / 2);
		buffP = 0;
	}

	//Enemy Damage
	damage = rand() % 10 + enemies[name].damage;

	if (*buff == true)
	{
		damage *= 2;
		*buff = false;
	}

	if (random < healP)
	{
		MyText.printText(("The enemy used Heal. They recovered " + std::to_string(int(damage * 0.7)) + " HP."), 50, RED, 0, 0, 1, 1); pause(1); MyText.clearOld();
		enemyHealth += (int)(damage * 0.75);

		if (enemyHealth > enemies[name].health)
			enemyHealth = enemies[name].health;
	}
	else if (random < (healP + buffP))
	{
		MyText.printText("The enemy is charging up their next attack...", 50, RED, 0, 0, 1, 1); pause(1); MyText.clearOld();
		*buff = true;
	}
	else
	{
		if (*defend == true)
		{
			damage = (damage * 80) / MAX_HEALTH;
			playerHealth -= damage;
			*defend = false;
		}
		else
			playerHealth -= damage;

		MyText.printText(("The enemy attacked you...They dealt " + std::to_string(damage) + " damage to you."), 50, RED, 0, 0, 1, 1); pause(1); MyText.clearOld();
	}
}