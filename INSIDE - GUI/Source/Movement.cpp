#include "Movement.h"

sf::RectangleShape mapText(sf::Vector2f(800.0f, 800.0f));
sf::Texture mapImg;
sf::RectangleShape compassTex(sf::Vector2f(200.0f, 200.0f));
sf::Texture compassImg;
bool print_MAP = false;

//The function to compute most of the input from the user (except some inputs)
void computeInput()
{
	//Initializing location.
	int location = maps[level][ypos][xpos];

	//The main meat of the function
	switch (inputID(input))
	{
	//Movement
	case NORTH:
		if (maps[level][ypos - 1][xpos] <= 0) {
			MyText.printText(moveFail[rand() % 6], 50); pause(1);
		}
		else
		{
			ypos = ypos - 1;
			while (maps[level][ypos][xpos] == 1)
			{
				//updateMap(xpos, ypos);
				ypos = ypos - 1;
			}
		}
		break;
	case SOUTH:
		if (maps[level][ypos + 1][xpos] <= 0) {
			MyText.printText(moveFail[rand() % 6], 50); pause(1);
		}
		else
		{
			ypos = ypos + 1;
			while (maps[level][ypos][xpos] == 1)
			{
				//updateMap(xpos, ypos);
				ypos = ypos + 1;
			}
		}
		break;
	case EAST:
		if (maps[level][ypos][xpos + 1] <= 0) {
			MyText.printText(moveFail[rand() % 6], 50); pause(1);
		}
		else
		{
			xpos = xpos + 1;
			while (maps[level][ypos][xpos] == 1)
			{
				//updateMap(xpos, ypos);
				xpos = xpos + 1;
			}
		}
		break;
	case WEST:
		if (maps[level][ypos][xpos - 1] <= 0) {
			MyText.printText(moveFail[rand() % 6], 50); pause(1);
		}
		else
		{
			xpos = xpos - 1;
			while (maps[level][ypos][xpos] == 1)
			{
				//updateMap(xpos, ypos);
				xpos = xpos - 1;
			}
		}
		break;

	//Look [Direction]
	case LOOKNORTH:
		if (directions[level][maps[level][ypos][xpos] - 1].north == "")	MyText.printText("There is nothing to look at.\n", 50);
		else  MyText.printText(directions[level][maps[level][ypos][xpos] - 1].north, 50);
		break;
	case LOOKEAST:
		if (directions[level][maps[level][ypos][xpos] - 1].east == "")	MyText.printText("There is nothing to look at.\n", 50);
		else  MyText.printText(directions[level][maps[level][ypos][xpos] - 1].east, 50);
		break;
	case LOOKSOUTH:
		if (directions[level][maps[level][ypos][xpos] - 1].south == "")	MyText.printText("There is nothing to look at.\n", 50);
		else  MyText.printText(directions[level][maps[level][ypos][xpos] - 1].south, 50);
		break;
	case LOOKWEST:
		if (directions[level][maps[level][ypos][xpos] - 1].west == "")	MyText.printText("There is nothing to look at.\n", 50);
		else  MyText.printText(directions[level][maps[level][ypos][xpos] - 1].west, 50);
		break;

	//Miscellaneous Commands
	case ATTACK:
		if (hasAxe == false)
			MyText.printText("You attack the air. Oh no, nothing happens...\n", 50);
		else
			MyText.printText("You swing the axe at the air. Nothing happens...\n", 50);
		break;
	case QUIT:
		MyText.printText("Thank you for playing ", 70); MyText.printText("INSIDE\n", 120, RED); pause(1); fadeOut();
		exit(0);
		break;
	case ITEMS:
		displayInventory();
		break;
	case CLEAR:
		system("cls");
		//*isChoice = false;
		break;
	case MOVE:
		MyText.printText("You move......nowhere.\n", 50);
		break;
	case LOOK:
		MyText.printText("You look at yourself. It feels nice.\n", 50);
		break;
	case STATS:
		MyText.printText("There are no stats to show.\n", 50);
		break;
	case DEFEND:
		MyText.printText("You defend against the air...Nice.\n", 50);
		break;
	case PICK:
		MyText.printText("There is nothing to pick up.\n", 50);
		break;
	case FOCUS:
		MyText.printText("You decide to focus. Your attention span for next command increases...or not.\n", 50);
		break;
	case PLACE:
		MyText.printText("You cannot use anything here.\n", 50);
		break;
	case JUMP:
		MyText.printText("You jumped. Interesting.\n", 50);
		break;
	case HELP:
		help();
		break;
	case DESCRIBE:
		for (int i = 0; i < 5; i++)
			MyText.printText(info[level][location - 1].text[i], 50);
		//displayText(describeText[level][location - 1], 50);
		Sleep(200);
		break;
	case MAP:
		printMap();
		break;
	case CHECK:
	case INTERACT:
		check(location, level);
		break;
	case SAVE:
		if (save() == 0)
			MyText.printText("Save Successful...", 50, GREEN);
		break;
	case LOAD:
		MyText.printText("You need to be in the menu to load a save file.\n", 50);
		break;
	case YELL:
		MyText.printText("You yell at the top of your lungs...But nobody came.", 50);
		break;
	case SLEEP:
		MyText.printText("You decide to sleep in the middle of the game...\n", 50);
		MyText.printText("......\n", 400);
		MyText.printText("The guilt of not playing the game properly wakes you up...\n", 50);
		break;
	case CREDITS:
		MyText.printText("Perhaps completing the game will achieve the same feat.\n", 50);
		break;
	case EXIT:
		MyText.printText("There is nothing to exit around you.\n", 50);
		break;
	case KMS:
		if (hasKnife)
			used_Knife();
		else
			MyText.printText("This might not be the best way out of this situation.\n", 50);
		break;
	case SEK:
		MyText.printText("Such actions would certainly be inappropriate in such a situation (?)", 50);
		break;
	case GAE:
		MyText.printText("Are you sure about the genre you chose to play?\n", 50);
		break;
	case CUSS:
		MyText.printText("You yell curses to your surroundings\n.........\nBut nothing happens.\n", 50);
		break; 
	case DANCE:
		MyText.printText("You begin dancing out of nowhere.\nYour audience does not seem to be amused.\n", 50);
		break;
	case READ:
		MyText.printText("There is nothing to read.\n", 50);
		break;
	case SIT:
		MyText.printText("You decided to sit down and have a short break.\n", 50);
		MyText.printText(".......................", 100);
		MyText.printText("You feel rejuvenated.\n", 50);
		break;
	default:
		MyText.printText("I cannot comprehend that command...\n", 50);
		break;

	}
}

//********************************************************************************************************************************************************************
//********************************************************************************************************************************************************************


//Display the "check" text for the particular location the user is at, if they input "check" or "interact"
void check(int location, int level)
{
	if (checkT[level][location-1] != "")
		MyText.printText(checkT[level][location-1], 50);
	else
		MyText.printText(checkText[choiceQ], 50);
}


//********************************************************************************************************************************************************************
//********************************************************************************************************************************************************************


//Updating the map to reveal more of the map
void updateMap(int x, int y)
{
	for (int k = 0; k < 5; k++)
	{
		for (int l = 0; l < 5; l++)
		{
			tempMap[y - 2 + k][x - 2 + l] = 1;
		}
	}
}

//Clearing the map (Used at the start of each level)
void clearMap()
{
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 20; j++)
			tempMap[i][j] = 0;
}

void initMap() {

	compassImg.loadFromFile("Levels/compass.png");

	switch (level) {
	case 0:
		mapImg.loadFromFile("Levels/level0.png");
		break;
	case 1:
		mapImg.loadFromFile("Levels/level1_hidden.png");
		break;
	case 2:
		mapImg.loadFromFile("Levels/level2up.png");
		break;
	case 3:
		mapImg.loadFromFile("Levels/level3.png");
		break;
	case 4:
		mapImg.loadFromFile("Levels/level0.png");
		break;
	default:
		mapImg.loadFromFile("Levels/map.png");
		break;
	}
}

void printMap() {
	
	MyText.clearOld();
	print_MAP = true;

	if (level == 1 && inserted == true)
		mapImg.loadFromFile("Levels/level1.png");

	if(level == 2 && (location == 12 || location == 13 || location == 14 || location == 15 || location == 16 || location == 17))
		mapImg.loadFromFile("Levels/level2down.png");
	else if(level == 2)
		mapImg.loadFromFile("Levels/level2up.png");

	if (level == 3 && lock_side1 == false && puzzle == false)
		mapImg.loadFromFile("Levels/level3_p.png");
	else if (level == 3 && lock_side1 == true && puzzle == true)
		mapImg.loadFromFile("Levels/level3_w.png");
	else if (level == 3 && lock_side1 == false && puzzle == true)
		mapImg.loadFromFile("Levels/level3_wp.png");
	

	mapText.setTexture(&mapImg);
	mapText.setPosition(sf::Vector2f((float)(MID_X - 400), (float)(MID_Y - 400)));
	compassTex.setTexture(&compassImg);
	compassTex.setPosition(sf::Vector2f((float)(window_w - DEFAULT_X - 100), (float)(DEFAULT_Y)));

	if(level != 3)
		MyText.printText("X indicates your current position", 0, WHITE, 0, BOTTOM_MID_Y + (4 * FONT_SIZE), 1, 0, FONT_SIZE, false, 0, CASCADIA);

	window->draw(mapText);
	window->draw(compassTex);
	MyText.printText("X", 0, RED, (MID_X - 400) + (40 * xpos), (MID_Y - 400) + (40 * ypos), 0, 0, FONT_SIZE, false, 0, CASCADIA);

	
	pause(1);
	print_MAP = false;
}


//********************************************************************************************************************************************************************
//********************************************************************************************************************************************************************


// IDs for individual inputs.
// Mostly to consolidate everything and for our ease of use.
int inputID(std::string input)
{
	if (input == "go north" || input == "move north" || input == "north" || input == "go forward" || input == "move forward" || input == "forward" || input == "front")
		return 1;
	else if (input == "go south" || input == "move south" || input == "south" || input == "go back" || input == "move back" || input == "back")
		return 2;
	else if (input == "go east" || input == "move east" || input == "east" || input == "go right" || input == "move right" || input == "right")
		return 3;
	else if (input == "go west" || input == "move west" || input == "west" || input == "go left" || input == "move left" || input == "left")
		return 4;
	else if (input == "look north" || input == "look front" || input == "look forward")
		return 5;
	else if (input == "look east" || input == "look right")
		return 6;
	else if (input == "look south" || input == "look back" || input == "look behind")
		return 7;
	else if (input == "look west" || input == "look left")
		return 8;
	else if (input == "directions" || input == "direction")
		return 9;
	else if (input == "exit" || input == "exit house" || input == "exit door")
		return 10;
	else if (input == "clear")
		return 11;
	else if (input == "attack")
		return 12;
	else if (input == "move")
		return 13;
	else if (input == "look")
		return 14;
	else if (input == "describe" || input == "describe area" || input == "describe surroundings")
		return 15;
	else if (input == "map" || input == "show map")
		return 16;
	else if (input == "place" || input == "place book" || input == "use book" || input == "insert" || input == "insert book" || input == "use")
		return 17;
	else if (input == "pick" || input == "pick book" || input == "pick up" || input == "pick key" || input == "take" || input == "take book" || input == "take key" || input == "pick axe" || input == "take axe" || input == "pick sketchbook" || input == "take sketchbook" || input == "take knife" || input == "pick knife" || input == "take blueprint" || input == "pick blueprint" || input == "take report" || input == "pick report")
		return 18;
	else if (input == "interact")
		return 19;
	else if (input == "check" || input == "examine")
		return 20;
	else if (input == "jump" || input == "jump off")
		return 21;
	else if (input == "open" || input == "open door" || input == "enter" || input == "enter door" || input == "enter house")
		return 22;
	else if (input == "defend" || input == "dodge" || input == "block")
		return 23;
	else if (input == "focus" || input == "charge" || input == "focus attack" || input == "charge attack")
		return 24;
	else if (input == "items" || input == "inventory" || input == "show items" || input == "show inventory")
		return 25;
	else if (input == "help" || input == "info")
		return 26;
	else if (input == "health" || input == "show health" || input == "show stats" || input == "stats" || input == "show health")
		return 27;
	else if (input == "save")
		return 28;
	else if (input == "load")
		return 29;
	else if (input == "yell" || input == "shout")
		return 30;
	else if (input == "sleep" || input == "go to sleep" || input == "go sleep")
		return 31;
	else if (input == "credits" || input == "show credits")
		return 32;
	else if (input == "use key" || input == "place key" || input == "insert key" || input == "key")
		return 35;
	else if (input == "read note" || input == "read" || input == "read book" || input == "read letter" || input == "read journal" || input == "read diary")
		return 38;
	else if (input == "quit" || input == "quit game")
		return 39;
	else if (input == "kms" || input == "kill myself" || input == "end myself" || input == "unalive" || input == "unalive myself" || input == "kill me" || input == "end me" || input == "use knife" || input == "use axe" || input == "use stained knife" || input == "use worn axe" || input == "die")
		return 40;
	else if (input == "sex" || input == "have sex" || input == "gay sex" || input == "masturbate")
		return 41;
	else if (input == "gay" || input == "homo")
		return 42;
	else if (input == "shit" || input == "fuck" || input == "retard" || input == "bullshit" || input == "damn" || input == "shut up" || input == "cunt" || input == "bastard" || input == "asshole" || input == "ass" || input == "dick" || input == "cock" || input == "fuck me" || input == "fuck you" || input == "stfu" || input == "shut the fuck up" || input == "bitch" || input == "piss")
		return 43;
	else if (input == "dance" || input == "breakdance")
		return 44;
	else if (input == "sit" || input == "sit down" || input == "chill" || input == "vibe" || input == "relax")
		return 45;
	else
		return 0;
}


//********************************************************************************************************************************************************************
//********************************************************************************************************************************************************************


// Converting the user input to lowercase.
std::string lowercase(std::string input)
{
	int size = input.length();

	for (int i = 0; i < size; i++)
		input[i] = tolower(input[i]);

	return input;
}
