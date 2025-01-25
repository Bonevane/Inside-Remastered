#include "Levels.h"

void actions() {

	switch (level) {

		// Level 0

	case 0:
		if (location == 6 && (inputID(input) == NORTH || inputID(input) == OPEN || inputID(input) == INTERACT || inputID(input) == PLACE || inputID(input) == USE_KEY))
			if (hasKey == true)
			{
				MyText.printText("You use the key on the house door. It fits perfectly.\n", 50);
				MyText.printText("You decide to enter the house.", 50);
				stopLevelMusic();
				fadeOut(); level++;
			}
			else
				MyText.printText("The door is locked...\n", 50);


		// Others
		else if (inputID(input) == INTERACT || inputID(input) == CHECK || inputID(input) == PICK)
			if (location == 9 && hasKey == false)
			{
				MyText.printText("You check the pile of leaves and find a rusty key. You decided to pick it up.\n", 50);
				hasKey = true;
			}
			else if (location == 10 && hasAxe == false) {
				MyText.printText("You dislodged the axe from the tree. It is quite heavy.\n", 50);
				hasAxe = true;
				info[0][9] = { "", "The forest path opens up to your south and to your east.\n", "You can see the northern side of the house from here.\n", "", "",10 };
				describeText[0][9] = "You are at the eastern edge of the forest path.\nYou can see the northern side of the house from here.\n";
			}
			else
				check(location, 0);

		// Secret Ending :O
		else if ((inputID(input) == JUMP) && location == 11)
		{
			stopLevelMusic(); 
			ending_1();
			exit(1);
		}

		// If none of the events are valid for the current location, send input to be computed by the computeInput() function
		else
			computeInput();
		break;


		// Level 1

	case 1:
		// Winning Condition
		if (location == 4 && (inputID(input) == INTERACT || inputID(input) == EAST || inputID(input) == OPEN))
		{
			if (hasSketch)
			{
				MyText.printText("You decide to go through the door.\n", 50);
				stopLevelMusic();
				fadeOut(); level++;
				isPrologue = true;
			}
			else
				MyText.printText("The door seems to be locked. You are unable to open it...\n", 50);
		}


		// Others
		else if ((location == 10) && (inputID(input) == INTERACT || inputID(input) == PLACE))
		{
			if (hasBook == false)
				MyText.printText("You do not have a book to place.\n", 50);
			else if (inserted == false)
			{
				MyText.printText("You inserted the book into the slot. You hear a deep thud...\n", 50);
				inserted = true; hasBook = false;
			}
			else
				MyText.printText("The once empty slot is now filled.\n", 50);
		}
		else if (inputID(input) == INTERACT || inputID(input) == PICK || inputID(input) == CHECK || inputID(input) == READ)
		{
			if (location == 8 && hasBook == false && bookCount == 0)
			{
				MyText.printText("You pick up the book. It says, 'Applied Physics by M. S'. Suddenly you regret picking it up.\n", 50);
				hasBook = true; bookCount++;
			}
			else if (location == 12 && hasSketch == false)
			{
				MyText.printText("You pick up the old and dusty book. It is an old sketchbook.....It feels oddly nostalgic...", 50); pause(1);
				fadeOut(); print_HUD = false;
				stopLevelMusic();
				memory_1();
				playLevelMusic(); print_HUD = true; fadeIn();
				hasSketch = true;

				info[1][4 - 1] = { "There is a door to your east, and a set of stairs going up.\n", "The pitch black darkness and the screeching sound at the end of the stairs prevents you from going up.\n", "", "", "", 4 };
				maps[1][11][18] = 4;
			}
			else if ((location == 9) && (inputID(input) == INTERACT || inputID(input) == CHECK || inputID(input) == READ)) {
				note_2();

				if (readNote[1] == true) {
					interest++;
					readNote[1] = false;
				}
			}
			else
				check(location, 1);
		}
		

		else
			computeInput();

		if (inserted && Level1_Temp == 0) {

			maps[1][7][10] = 14; maps[1][6][10] = 1; maps[1][5][10] = 1; locationFlags[1][9] = true; Level1_Temp++;
		}
		break;


		// Level 2

	case 2:

		if (location == 14 && (inputID(input) == INTERACT || inputID(input) == SOUTH || inputID(input) == OPEN || inputID(input) == EXIT))
		{
			if (locked == false)
			{
				MyText.printText("You decide to exit the house...\n", 50);
				stopLevelMusic();
				fadeOut(); level++;
				isPrologue = true;
			}
			else
				MyText.printText("There seems to be a mysterious force acting on the door. You are unable to open it...\n", 50);
		}

		// Others
		else if (inputID(input) == INTERACT || inputID(input) == CHECK || inputID(input) == PICK || inputID(input) == READ)
		{
			if (location == 7 && locked == true)
			{
				if (safe() == 1 && hasBPrint == false)
				{
					MyText.printText("The safe is now unlocked...\n", 50); locked = false; enemy_2c = true;
				}
				else
					MyText.printText("The code was incorrect...\n", 50);

				//pause(1);
			}
			else if (location == 7 && locked == false && hasBPrint == false)
			{
				MyText.printText("You pick the sheet up. It seems to be a blueprint of a house.....It feels oddly nostalgic...\n", 50);
				fadeOut(); stopLevelMusic(); print_HUD = false;
				memory_2();
				playLevelMusic(); print_HUD = true; fadeIn();
				hasBPrint = true;
				enemy_2c = true;

				maps[2][19][14] = 14;
			}
			else if (location == 5)
			{
				if (shower.getStatus() == sf::Music::Stopped) {
					MyText.printText("You turned on the shower.\n", 50);
					shower.play(); shower.setVolume(100);
				}
				else {
					MyText.printText("You turned the shower back off.\n", 50);
					for (float i = 100; i > 0; i--) {
						shower.setVolume(i); sleep(5);
					}
					shower.stop();
				}
			}
			else if (location == 3) {
				fadeOut(); print_HUD = false; print_couple = true; MyText.clearOld(); PNGNumber = 2;
				fadeIn(); pause(1);
				print_couple = false; print_HUD = true;
			}
			else if (location == 4) {
				note();

				if (readNote[0] == true) {
					interest++;
					readNote[0] = false;
				}
			}
			else if (location == 16) {
				note_8();

				if (readNote[7] == true) {
					interest++;
					readNote[7] = false;
				}
			}
			else if (location == 6) {
				note_5();

				if (readNote[4] == true) {
					interest++;
					readNote[4] = false;
				}
			}
			else
				check(location, level);
		}

		else
			computeInput();

		break;


		// Level 3

	case 3:
		// Winning Condition
		if (location == 22 && (inputID(input) == INTERACT || inputID(input) == SOUTH || inputID(input) == OPEN || inputID(input) == EXIT))
		{
			if (puzzle)
			{
				MyText.printText("You decide to exit the observatory.", 50);
				for (float i = 100; i >= 0; i = i - 2) {
					orrery.setVolume(i); music[level].setVolume(i); sleep(30);
				}
				fadeOut(); level++;
				orrery.stop(); music[level].stop();
			}
			else
				MyText.printText("The door seems to be locked.\n", 50);
		}

		// Door unlocking from pump room & observatory
		else if (location == 21 && (inputID(input) == INTERACT || inputID(input) == WEST || inputID(input) == OPEN) && lock_side1 == true) {
			MyText.printText("You unlocked this side of the door to your west.\n", 50); lock_side1 = false;
			maps[3][16][10] = 1; maps[3][16][11] = 1; maps[3][16][12] = 1;
			directions[3][18] = { "The panel has large text above it which reads 'Water Pump Controls'.\n", "There's a dimly lit table at the southern end of the room.\n", "There is a door to your east, leading to the observatory.\n", "", 19 };
		}
		else if (location == 19 && (inputID(input) == INTERACT || inputID(input) == EAST || inputID(input) == OPEN) && lock_side1 == true) {
			MyText.printText("The door can only be unlocked from the other side.\n", 50); pause(1);
		}

		// Others
		else if (location == 15 && (inputID(input) == NORTH && puzzle == false)) {
			MyText.printText("The path is flooded. It prevents you from going further...\n", 50); pause(1);
		}
		else if (inputID(input) == INTERACT || inputID(input) == CHECK || inputID(input) == PICK || inputID(input) == READ) {
			if (location == 19 && puzzle == false)
			{
				if (puzzle1() == 1)
				{
					puzzle = true; drain.play(); locationFlags[3][14] = false; locationFlags[3][16] = false;
					info[3][14] = { "The room at the bottom of the stairs to the north can be reached now.\n", "There is a room filled with pipes to the west.\n", "", "", "", 15 };
					info[3][16] = { "The corridor isn't flooded anymore,\n", "but your footsteps still make sounds on the wet floor.\n", "The storeroom is to your west, and the pump room to the east.\n", "There are other doors to the north.\n", "", 17 };
					describeText[3][14] = "You're at the northern end of the flooded corridoor.\nYou can see a door at the bottom of the small staircase to the north.\n";
				}
			}
			else if (location == 16 && hasReport == false)
			{
				MyText.printText("You pick up the medical records. They seem to be cancer reports for \"Adrian\".\n", 50);
				MyText.printText("You are reminded of something...", 50);
				fadeOut(); print_HUD = false;
				for (float i = 100; i >= 0; i = i - 2) {
					orrery.setVolume(i); music[level].setVolume(i); sleep(30);
				}
				memory_3();
				for (float i = 0; i <= 100; i = i + 2) {
					orrery.setVolume(i); music[level].setVolume(i); Sleep(30);
				}
				print_HUD = true; fadeIn();
				hasReport = true; maps[3][17][16] = 22;
			}
			else if (location == 6 && hasKnife == false) {
				MyText.printText("You slid the knife out of the corpse's skull.\n", 50);
				hasKnife = true;
				info[3][5] = { "The stench of blood hits you as soon as you enter the kitchen.\n","There is a body with a disfigured face lying on the ground.\n","Its face appears to have been stabbed by a knife.\n","","", 6 };
				describeText[3][5] = "You now stand in the kitchen.\nThe stench of blood still reeks from the inanimate corpse.\n";
			}
			else if (location == 7 && hasSketch == false && hasBPrint == false)
				MyText.printText("It's Nell.\n", 50);
			else if (location == 21) {
				fadeOut(); print_HUD = false; print_Moon = true; MyText.clearOld(); PNGNumber = 1;
				fadeIn(); pause(1);
				print_Moon = false; print_HUD = true;
			}
			else if (location == 18)
				note_3();
			else if (location == 11) {
				note_6();

				if (readNote[5] == true) {
					interest++;
					readNote[5] = false;
				}
			}
			else if (location == 5) {
				note_7();
				info[3][5 - 1] = { "As soon as you enter the room, the static on the TV stops.\n", "You stand in front of it, and see........... yourself.\n", "..........\nNot from now, but a few moments ahead.\n", "It's like it knows what you're going to do next.\n", "A round table in the centre has an opened letter on it.\n", 5 };
				describeText[3][5 - 1] = "You're in the room with the TV displaying a video feed of yourself.\nA round table in the centre has an opened letter on it.\n";

				if (readNote[6] == true) {
					interest++;
					readNote[6] = false;
				}
			}

			else if (location == 13) {
				note_4();

				if (readNote[3] == true) {
					interest++;
					readNote[3] = false;
				}
			}
			else if (location == 20)
				note_9();
			else
				check(location, level);
		}
		// Cannot print map when in the maze :D
		else if (inputID(input) == MAP && location == 2)
			MyText.printText("You do not know where you are...", 50);


		else
			computeInput();

		break;


		// Level 4

	case 4:
		if (inputID(input) == INTERACT || inputID(input) == CHECK || inputID(input) == PICK || inputID(input) == READ) {

			if (location == 6 && hasSketch == false) {
				MyText.printText("You picked up the sketchbook.", 50); pause(); fadeOut(); stopBGM(); print_HUD = false;
				memory_1_End();
				playBGM(); hasSketch = true; print_HUD = true;

				locationFlags[4][9 - 1] = false;
			}

			else if (location == 6 && hasBPrint == true && hasReport == false) {
				MyText.printText("You picked up the medical report.", 50); pause(); fadeOut(); stopBGM(); print_HUD = false;
				memory_3_End();
				playBGM(); hasReport = true; print_HUD = true;

				maps[4][12][8] = 1;
				maps[4][13][9] = 0;
				maps[4][14][8] = 0;
				maps[4][13][7] = 0;

				locationFlags[4][6 - 1] = false;
				info[4][6 - 1] = { "You stand in front of the house ruins.\n", "You are surrounded by debris from the house.\n", "In front of you stands a door to your house.\n", "", "", 6 };
				describeText[4][6 - 1] = "You stand in front of the house ruins.\nYou are surrounded by debris from the house.\nIn front of you stands a door to your house.\n";

			}

			else if (location == 9 && hasSketch == true && hasBPrint == false) {
				MyText.printText("You picked up the torn blueprints.", 50); pause(); fadeOut(); stopBGM(); print_HUD = false;
				memory_2_End();
				playBGM(); hasBPrint = true; print_HUD = true;

			}

			else
				check(location, level);

		}
		else if (location == 6 && (inputID(input) == NORTH || inputID(input) == OPEN) && hasReport) {
			print_HUD = false;
			boss();
		}
		else if (inputID(input) == MAP) {
			MyText.printText("There is nothing to show.", 50);
		}
		else
			computeInput();

	default:
		break;
	}
}