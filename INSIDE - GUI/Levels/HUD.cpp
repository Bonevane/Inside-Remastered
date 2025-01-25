#include "Levels.h"

bool print_HUD = false;
bool print_EnemyHUD = false;
int something_ALPHA = 0;

void printHUD() {

	sf::Text loc, n, s, e, w;
	sf::RectangleShape rect(sf::Vector2f(window_w, 2 * FONT_SIZE));
	rect.setFillColor(sf::Color(10, 10, 10, 255));

	loc.setFont(font_cascadia);
	n.setFont(font_cascadia); s.setFont(font_cascadia);
	w.setFont(font_cascadia); e.setFont(font_cascadia);

	loc.setCharacterSize(FONT_SIZE);
	n.setCharacterSize(FONT_SIZE); s.setCharacterSize(FONT_SIZE);
	w.setCharacterSize(FONT_SIZE); e.setCharacterSize(FONT_SIZE);

	loc.setString(points[level][location - 1]);
	n.setString("North"); s.setString("South"); e.setString("East"); w.setString("West");

	loc.setFillColor(sf::Color(255, 191, 0, 255));
	n.setFillColor(sf::Color::Color(128, 128, 128, 255)); s.setFillColor(sf::Color::Color(128, 128, 128, 255));
	e.setFillColor(sf::Color::Color(128, 128, 128, 255)); w.setFillColor(sf::Color::Color(128, 128, 128, 255));

	loc.setPosition(DEFAULT_X, 8);
	n.setPosition(((window_w * 9) / 10) - (24 * 14), 8); s.setPosition(((window_w * 9) / 10) - (17 * 14), 8);
	e.setPosition(((window_w * 9) / 10) - (10 * 14), 8); w.setPosition(((window_w * 9) / 10) - (4 * 14), 8);


	window->draw(rect);
	window->draw(loc);
	if (maps[level][ypos - 1][xpos] > 0)
		window->draw(n);
	if (maps[level][ypos + 1][xpos] > 0)
		window->draw(s);
	if (maps[level][ypos][xpos + 1] > 0)
		window->draw(e);
	if (maps[level][ypos][xpos - 1] > 0)
		window->draw(w);

	//window->display();
}


void printEnemyHUD() {

	if (playerHealth < 0)
		playerHealth = 0;

	sf::Text player, enemy;
	sf::RectangleShape playerH(sf::Vector2f((float)(2 * playerHealth), (float)FONT_SIZE + 6.0f));
	sf::RectangleShape playerHO(sf::Vector2f((float)(2 * playerHealth_ORIGINAL), (float)FONT_SIZE + 6.0f));
	sf::RectangleShape enemyH(sf::Vector2f((float)(2 * enemyHealth), (float)FONT_SIZE + 6.0f));
	sf::RectangleShape enemyHO(sf::Vector2f((float)(2 * enemyHealth_ORIGINAL), (float)FONT_SIZE + 6.0f));

	playerH.setFillColor(sf::Color(134, 185, 30, 255));
	enemyH.setFillColor(sf::Color(200, 0, 0, 255));
	playerHO.setFillColor(sf::Color(255, 191, 0, 255));
	enemyHO.setFillColor(sf::Color(255, 191, 0, 255));

	playerH.setPosition(sf::Vector2f(DEFAULT_X + (10 * 14), 26.0f));
	enemyH.setPosition(sf::Vector2f(((window_w * 9) / 10) - 300, 26.0f));
	playerHO.setPosition(sf::Vector2f(DEFAULT_X + (10 * 14), 26.0f));
	enemyHO.setPosition(sf::Vector2f(((window_w * 9) / 10) - 300, 26.0f));

	player.setFont(font);	enemy.setFont(font);

	player.setCharacterSize(FONT_SIZE);	enemy.setCharacterSize(FONT_SIZE);

	player.setString("Health: ");	enemy.setString("Enemy: ");

	player.setFillColor(sf::Color(230, 230, 230, 255));	enemy.setFillColor(sf::Color::Color(230, 230, 230, 255));

	player.setPosition(DEFAULT_X, 24); enemy.setPosition(((window_w * 9) / 10) - 300 - (9 * 14), 24);


	if (something_ALPHA < 255) {
		something_ALPHA += 3;
		something_more.setFillColor(sf::Color(255, 255, 255, something_ALPHA));
	}

	window->draw(something_more);
	window->draw(player);
	window->draw(enemy);
	window->draw(playerHO);
	window->draw(playerH);
	window->draw(enemyHO);
	window->draw(enemyH);
}

void printItemPNG(int ItemID) {

	moonTex.loadFromFile("Levels/moon.png");
	moon.setTexture(&moonTex);
	moon.setPosition(sf::Vector2f((float)MID_X - 450, (float)MID_Y - 450));
	coupleTex.loadFromFile("Levels/couple.png");
	couple.setTexture(&coupleTex);
	couple.setPosition(sf::Vector2f((float)MID_X - 450, (float)MID_Y - 225));
	polaroidTex.loadFromFile("Levels/polaroid-nell.png");
	polaroid.setTexture(&polaroidTex);
	polaroid.setPosition(sf::Vector2f((float)MID_X - 300, (float)MID_Y - 240));


	switch (ItemID) {
	case 1:
		window->draw(moon);
		break;
	case 2:
		window->draw(couple);
		break;
	case 3:
		window->draw(polaroid);
		break;
	default:
		break;
	}
}