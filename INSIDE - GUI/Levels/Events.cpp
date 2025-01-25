#include "Levels.h"

void events() {

	switch (level) {

	// Level 0

	case 0:
		if (location == 9)
		{
			if (hasKey == false)
				MyText.printText("You see something hidden in the pile of leaves...\n", 50);
		}
		else if (location == 6 && hasKey == true)
		{
			MyText.printText("You feel the weight of the key in your pocket...\n", 50);
		}

		if (isPrologue == false) {
			if (location == 11 && tutorialTips[0] == false) {
				tutorial.printText("You can type \"Move North\" to move.", 0, GREY, 0, window_h - (window_h / 6), 1, 0, 18, false, 0, CASCADIA); tutorialTips[0] = true;
			}
			else if (location == 6 && tutorialTips[1] == false) {
				tutorial.printText("You may \"Enter\" certain places.", 0, GREY, 0, window_h - (window_h / 6), 1, 0, 18, false, 0, CASCADIA); tutorialTips[1] = true;
			}
			else if (location == 10 && tutorialTips[2] == false) {
				tutorial.printText("You can \"Interact\" with certain objects.", 0, GREY, 0, window_h - (window_h / 6), 1, 0, 18, false, 0, CASCADIA); tutorialTips[2] = true;
			}
			else if (location == 9 && tutorialTips[3] == false && hasKey == false) {
				tutorial.printText("You can \"Check\" your surroundings for items or information.", 0, GREY, 0, window_h - (window_h / 6), 1, 0, 18, false, 0, CASCADIA); tutorialTips[3] = true;
			}
			else if (location == 9 && hasKey && tutorialTips[4] == false) {
				tutorial.printText("Some items can be \"Used\" in certain places.", 0, GREY, 0, window_h - (window_h / 6), 1, 0, 18, false, 0, CASCADIA); tutorialTips[4] = true;
			}
			else if ((location == 2 || location == 7) && tutorialTips[5] == false) {
				tutorial.printText("You may open the \"Map\" for help.", 0, GREY, 0, window_h - (window_h / 6), 1, 0, 18, false, 0, CASCADIA); tutorialTips[5] = true;
			}
			else if (location == 5 && tutorialTips[6] == false) {
				tutorial.printText("You may \"Look\" around in any direction.", 0, GREY, 0, window_h - (window_h / 6), 1, 0, 18, false, 0, CASCADIA); tutorialTips[6] = true;
			}
			else if ((location == 2 || location == 7) && tutorialTips[7] == false && (tutorialTips[2] || tutorialTips[3])) {
				tutorial.printText("You can seek \"Help\" for additional commands.", 0, GREY, 0, window_h - (window_h / 6), 1, 0, 18, false, 0, CASCADIA); tutorialTips[7] = true;
			}
		}

		break;


	// Level 1

	case 1:
		if (location == 11 && enemy_1a == true)
		{
			enemySound[0].play();
			for (float i = 100.0f; i > 0.0f; i--) {
				music[level].setVolume(i); enemySound[0].setVolume(100-i); sleep(4);
			}

			MyText.printText("There is a humanoid creature lying on the floor. Wrapped in a torn and bloodied straight jacket, it resembled\na contorted figure resigned to the cold floor.\n", 50);
			MyText.printText("An x is etched into its skin where a face should have been.\nIt rises up after noticing you, making faint, painful moaning noises.\nIt is going to attack you.\n", 50);
			pause(1); print_HUD = false;
			if (enemy(0) == 1)
			{
				enemy_1a = false; print_HUD = true; fadeIn();
			}

			for (float i = 0.0f; i < 100.0f; i ++) {
				music[level].setVolume(i); enemySound[0].setVolume(100 - i); sleep(4);
			}
			enemySound[0].stop();
		}

		if (location == 8)
		{
			if (hasBook == false && inserted == false)
				MyText.printText("There seems to be a book lying on the table...\n", 50);
		}
		else if ((location == 10) && inserted == false)
			MyText.printText("There is an empty slot in the shelf...\n", 50);
		else if (location == 12 && hasSketch == false)
			MyText.printText("An old and dusty sketchbook lies on the the table. It reminds you of something...\n", 50);


		switch (location)
		{
		case 8:
			bgm.setVolume(10);
			break;
		case 7:
			bgm.setVolume(5);
			break;
		default:
			bgm.setVolume(0);
			break;
		}
		break;

	// Level 2

	case 2:

		if (location == 7)
		{
			if (hasBPrint == false && locked == true) {
				MyText.printText("The display on the safe is demanding a 5 digit code...\n", 50);
			}

			else if (hasBPrint == false && locked == false)
				MyText.printText("A sheet of paper lies inside the safe. It gives you a faint sense of nostalgia...\n", 50);
		}
		else if (location == 5)
		{
			if (hasAxe == false)
				MyText.printText("There seems to be an axe lying on the ground. Perhaps it could be useful...\n", 50);
		}
		else if (location == 11)
		{
			MyText.printText("Perhaps the number of consecutive notes means something...\n", 50);
		}

		if (location == 7 && enemy_2a == true)
		{
			enemySound[1].play();
			for (float i = 100.0f; i > 0.0f; i--) {
				music[level].setVolume(i); enemySound[1].setVolume(100 - i); sleep(4);
			}
			MyText.printText("You hear a loud thump behind you. A grotesque creature, part flesh and metal, stands on all four twisted limbs, covered in spikes.\n", 50);
			MyText.printText("No discernible head, just a mass of eyes and mouths emitting distorted screams.\nIt runs toward heat and light of the lamp, despite burning its skin in the process\nIt notices you and starts running towards you, screeching.\n", 50);
			pause(1);  print_HUD = false;
			if (enemy(0) == 1) {
				enemy_2a = false; print_HUD = true; fadeIn();
			}
			for (float i = 0.0f; i < 100.0f; i++) {
				music[level].setVolume(i); enemySound[1].setVolume(100 - i); sleep(4);
			}
			enemySound[1].stop();
		}
		else if (location == 5 && enemy_2b == true)
		{
			enemySound[2].play();
			for (float i = 100.0f; i > 0.0f; i--) {
				music[level].setVolume(i); enemySound[2].setVolume(100 - i); sleep(4);
			}
			MyText.printText("A featureless, pale white mannequin emerges from the shadows.\nIt doesn't make a single sound while it moves, but it appears to be blind and only reacts to sound.\nIt moves frantically but doesn't appear weak.\nIts moving in your direction.", 50);
			pause(1); print_HUD = false;
			if (enemy(0) == 1) {
				enemy_2b = false; print_HUD = true; fadeIn();
			}
			for (float i = 0.0f; i < 100.0f; i++) {
				music[level].setVolume(i); enemySound[2].setVolume(100 - i); sleep(4);
			}
			enemySound[2].stop();
		}
		else if (location == 14 && enemy_2c == true)
		{
			enemySound[3].play();
			for (float i = 100.0f; i > 0.0f; i--) {
				music[level].setVolume(i); enemySound[3].setVolume(100 - i); sleep(4);
			}
			MyText.printText("...You hear footsteps approaching from behind...", 50);
			pause(1); print_HUD = false;
			if (enemy(1) == 1) {
				enemy_2c = false; print_HUD = true; fadeIn();
			}
			for (float i = 0.0f; i < 100.0f; i++) {
				music[level].setVolume(i); enemySound[3].setVolume(100 - i); sleep(4);
			}
			enemySound[3].stop();
		}


		// Dynamically changing the music for the piano to be hearable
		switch (location)
		{
		case 2:
			music[level].setVolume(80);
			piano.setVolume(0);
			shower.setVolume(10);
			break;
		case 5:
			piano.setVolume(10);
			music[level].setVolume(60);
			shower.setVolume(80);
			break;
		case 11:
			piano.setVolume(50);
			music[level].setVolume(0);
			break;
		case 10:
			piano.setVolume(40);
			music[level].setVolume(20);
			break;
		case 9:
			piano.setVolume(10);
			music[level].setVolume(60);
			shower.setVolume(0);
			break;
		case 4:
			piano.setVolume(0);
			shower.setVolume(60);
			break;
		case 3:
			shower.setVolume(30);
			break;
		case 6:
			shower.setVolume(0);
			break;
		default:
			piano.setVolume(0);
			music[level].setVolume(80);
			break;
		}

		break;


	// Level 3

	case 3:
		if (location == 11 && enemy_3a == true)
		{
			enemySound[4].play();
			for (float i = 100.0f; i > 0.0f; i--) {
				music[level].setVolume(i); orrery.setVolume(i); enemySound[4].setVolume(100 - i); sleep(4);
			}
			MyText.printText("A disfigured humanoid creature in nurse's clothes lies on the bed with a knife held against its chest, breathing heavily.\n", 50);
			MyText.printText("It stands up after noticing you, with blood pouring out from its mangled face and body.\nIt starts walking towards you swinging the knife, letting out horrifying screams in pain.\n", 50);
			pause(1); print_HUD = false;
			if (enemy(2) == 1) {
				enemy_3a = false; print_HUD = true; fadeIn();
			}
			for (float i = 0.0f; i < 100.0f; i++) {
				music[level].setVolume(i); orrery.setVolume(i); enemySound[4].setVolume(100 - i); sleep(4);
			}
			enemySound[4].stop();
		}


		if (location == 19 && puzzle == false)
			MyText.printText("The pump control light is blinking...\n", 50);
		else if (location == 16 && hasReport == false)
			MyText.printText("The name on the folder seems familiar...\n", 50);
		else if (location == 21 && music[3].getStatus() == sf::Music::Playing)
		{
			orrery.play();
			for (float i = 100; i >= 0; i--) {
				music[level].setVolume(i);
				orrery.setVolume(100 - i);
				sleep(10);
			}
			music[level].stop();
		}

		break;


	// Level 4

	case 4:
		if (location == 6 && hasSketch == false) {
			MyText.printText("You can see ruins of an old sketchbook, lying atop a burnt house mat.\n", 50);
		}
		else if (location == 9 && hasBPrint == false && hasSketch == true) {
			MyText.printText("In the centre lie torn pieces of what appears to be a blueprint for a house.\n", 50);
		}
		else if (location == 6 && hasBPrint == true && hasReport == false) {
			MyText.printText("Amidst the debris, you see a familiar medical report.\n", 50);
		}
		break;

	default:
		break;
	}
	
}

int safe() {

	MyText.clearOld();

	newline();
	MyText.printText("Enter Code: ", 50);
	getInput(1);

	if (input == "45423")
		return 1;

	return 0;
}

int puzzle1() {
	int a = 45, b = 0, c = 0, d = 0;
	int cursor_x, cursor_y, pos, button;

	print_PIPES = true;
	pipesTex.loadFromFile("Levels/pipes.png");
	pipes_glassTex.loadFromFile("Levels/pipes_glass.png");

	pipes.setTexture(&pipesTex);
	pipes_glass.setTexture(&pipes_glassTex);
	pipeA.setFillColor(sf::Color::Color(116, 204, 244, 30));
	pipeB.setFillColor(sf::Color::Color(116, 204, 244, 30));
	pipeC.setFillColor(sf::Color::Color(116, 204, 244, 30));
	pipeD.setFillColor(sf::Color::Color(116, 204, 244, 30));

	cursor_x = (MID_X - 550);
	cursor_y = (MID_Y - 360 + 40);
	pos = 0;

	while (1)
	{
		handleEvents();
		MyText.clearOld();

		pipeA.setSize(sf::Vector2f((float)(a * 20), 105.0f));
		pipeB.setSize(sf::Vector2f((float)(b * 20), 105.0f));
		pipeC.setSize(sf::Vector2f((float)(c * 20), 105.0f));
		pipeD.setSize(sf::Vector2f((float)(d * 20), 105.0f));

		pipes.setPosition(sf::Vector2f((float)(MID_X - 460), (float)(MID_Y - 360)));
		pipes_glass.setPosition(sf::Vector2f((float)(MID_X - 460), (float)(MID_Y - 360)));
		pipeA.setPosition(sf::Vector2f((float)(MID_X - 460 + 10), (float)(MID_Y - 360 + 10)));
		pipeB.setPosition(sf::Vector2f((float)(MID_X - 460 + 10), (float)(MID_Y - 360 + 204)));
		pipeC.setPosition(sf::Vector2f((float)(MID_X - 460 + 10), (float)(MID_Y - 360 + 399)));
		pipeD.setPosition(sf::Vector2f((float)(MID_X - 460 + 10), (float)(MID_Y - 360 + 593)));


		if (a == 5 && b == 15 && c == 20 && d == 5) {
			MyText.clearOld(); print_PIPES = false; sleep(500); return 1;
		}

		MyText.printText("Which tank would you like to drain?", 0, WHITE, 0, BOTTOM_MID_Y + 160, 1, 0, FONT_SIZE, true);

		button = printCursor(cursor_x, cursor_y);
		sleep(200);

		switch (button) {
		case 0:
			if (pos > 0) {
				pos--;
				cursor_y -= (195);
			}
			break;
		case 1:
			if (pos < 3) {
				pos++;
				cursor_y += (195);
			}
			break;
		case 2:
			if (pos == 0) {
				if (a == 45)
				{
					a -= 45;
					b += 15;
					c += 15;
					d += 15;
				}
				else if (a != 0)
				{
					a -= 5;
					d += 5;
				}
			}
			else if (pos == 1) {
				if (b != 0) {
					b -= 5;
					c += 5;
				}
			}
			else if (pos == 2) {
				if (c != 0) {
					c -= 5;
					a += 5;
				}
			}
			else if (pos == 3) {
				if (d != 0) {
					d -= 5;
					b += 5;
				}
			}
			break;
		}
	}
}

void note() {
	MyText.clearOld();
	newline();

	MyText.printText("You check the bed and find a note peeping from below. It reads:\n\n", 50);
	MyText.printText("\"Dear Diary,", 50, GREY); newline(); newline();
	MyText.printText("Today, as I wandered through the dusty attic, I stumbled upon a weathered notebook filled with sheet music.\n", 50, GREY);
	MyText.printText("I opened it to find the first page had a single line on it. It instantly transported me back to the days when Adrian\nwas learning to play the piano. ", 50, GREY);
	MyText.printText("Oh, how he struggled with each note, determined to create something special.", 50, GREY); newline(); newline();
	MyText.printText("One evening, after countless hours of practice, he surprised me with a tune he had composed just for me.\nHis eyes gleamed with pride as he played, and I could see the dedication he poured into crafting every chord.\nHe would hold that piece so dear.", 50, GREY); newline(); newline();
	MyText.printText("Yours,\nNell.\"", 50, GREY);
}

void note_2() {
	MyText.clearOld();
	newline();

	MyText.printText("You read the journal entry.", 50); newline(); newline();
	MyText.printText("\"January 4th,", 50, GREY); newline(); newline();
	MyText.printText("Spent some time with the new piano today. Starting to feel more comfortable with it.", 50, GREY); newline();
	MyText.printText("Oddly enough, Nell seems to enjoy it even more than I do, despite me being the one behind the keys!", 50, GREY); newline(); newline();
	MyText.printText("I am thinking about composing a piece, just for her. Perhaps using our safe code digits as a musical motif?", 50, GREY); newline();
	MyText.printText("Regardless, i'm quite excited to see her reaction when it's done.", 50, GREY); newline(); newline();
	MyText.printText("- A\"", 50, GREY);

	/*MyText.printText("You check the note. It reads:", 50); newline(); newline();
	MyText.printText("\"To whom it may concern,", 50, GREY); newline(); newline();
	MyText.printText("Count the numbers of individual notes before the gaps.", 50, GREY); newline(); newline();
	MyText.printText("Regards,\nAdrian.\"", 50, GREY);*/
}

void note_3() {
	MyText.clearOld();
	newline();

	MyText.printText("You read the note. It says:", 50); newline(); newline();
	MyText.printText("\"This is my final time explaining this to you Bob...Don't lose this note again.", 50, GREY); newline(); newline();
	MyText.printText("Pressing the Button 1 will drain tank 1 and distribute the water among the rest.\nThen if you press any button (including 1), it will drain said tank by 5 liters.\nWater goes from Tank 1 to 4, Tank 2 to 3, Tank 3 to 1, and from Tank 4 to 2.", 50, GREY); newline(); newline();
	MyText.printText("DO NOT LOSE THIS NOTE AGAIN BOB. THIS IS YOUR FINAL WARNING\"", 50, GREY);
}

void note_4() {
	MyText.clearOld();
	newline();
	 
	MyText.printText("Name: ", 50); MyText.printText("CENSORED", 50, GREY); newline();
	MyText.printText("Age: ", 50); MyText.printText("37", 50, GREY); newline();
	MyText.printText("Sex: ", 50); MyText.printText("Male", 50, GREY); newline();
	MyText.printText("Status: ", 50); MyText.printText("Deceased", 50, GREY); newline();
	MyText.printText("Cause: ", 50); MyText.printText("Road Traffic Accident", 50, GREY); newline(); newline();
	MyText.printText("Comments: ", 50); newline();
	MyText.printText("The patient succumbed to severe injuries indicative of a traumatic skull fracture. Post-mortem examination and imaging studies revealed a comminuted fracture in the left parietal region of the skull extending about 5cm in diameter.", 50, GREY); newline(); newline();
	MyText.printText("Further examination showed no evidence of underlying brain injury.", 50, GREY); newline(); newline();
	MyText.printText("Despite immediate medical intervention, patient succumbed to the severity of the injuries sustained during the\nincident.", 50, GREY);
}

void note_5() {

	MyText.clearOld();
	newline();

	MyText.printText("You read the journal entry.", 50); newline(); newline();
	MyText.printText("\"February 12th,", 50, GREY); newline(); newline();
	MyText.printText("Today was a much-needed escape to the mountains with Nell. Oh how stressful things have gotten ever since we\nbegan work on the house.", 50, GREY); newline();
	MyText.printText("I just couldn't help but feel a sense of tranquility for once.", 50, GREY); newline(); newline();
	MyText.printText("But amidst the breathtaking scenery, I just couldn't resist capturing her beauty with a polaroid.", 50, GREY); newline();
	MyText.printText("Each time I glance at the photo, I find myself falling for her all over again.", 50, GREY); newline();
	MyText.printText("It's moments like these that make me feel so grateful to have her by my side.", 50, GREY); newline(); newline();
	MyText.printText("- A\"", 50, GREY);
	
	MyText.printText("< 1 / 2 >", 20, WHITE, 0, window_h - (window_h / 5), 1, 0); pause(1); 
	
	print_HUD = false; print_Polaroid = true; MyText.clearOld(); PNGNumber = 3;
	MyText.printText("< 2 / 2 >", 20, WHITE, 0, window_h - (window_h / 5), 1, 0); pause(1);
	print_Polaroid = false; print_HUD = true;

}

void note_6() {

	MyText.clearOld();
	newline();

	MyText.printText("You read the journal entry.", 50); newline(); newline();

	MyText.printText("\"September 13th,", 50, GREY); newline(); newline();
	MyText.printText("For a brief moment, I felt a weight lift from my shoulders.", 50, GREY); newline();
	MyText.printText("The culmination of our dreams and hard work, a testament to our love, finally in our grasp.", 50, GREY); newline(); newline();

	MyText.printText("But amidst the satisfaction, a shadow lurked on the horizon, but I was too blind to notice.", 50, GREY); newline();
	MyText.printText("Until it hit me like a train. How do I tell her? The thought of breaking her heart renders me speechless.", 50, GREY); newline(); newline();

	MyText.printText("So, for now, i'll carry this burden alone, clinging to each moment with her as if it were our last,", 50, GREY); newline();
	MyText.printText("knowing that one day soon, it might just be.", 50, GREY); newline(); newline();

	MyText.printText("- A\"", 50, GREY);
}

void note_7() {
	MyText.clearOld();
	newline();

	MyText.printText("You read the letter.", 50); newline(); newline();

	MyText.printText("\"Dear Nell,", 50, GREY); newline(); newline();
	MyText.printText("I'm glad you're still here...", 50, GREY); newline(); newline();
	MyText.printText("I'm here for you, Nell. You can feel free to lean on me anytime you feel like it.", 50, GREY); newline(); newline();
	MyText.printText("You are not alone in this.", 50, GREY); newline(); newline();
	MyText.printText("With love,\nMark\"", 50, GREY);
}

void note_8() {

	MyText.clearOld();
	newline();

	MyText.printText("\"July 17th,", 50, GREY); newline(); newline();
	MyText.printText("With the house nearly complete, exhaustion seems to have finally settled in. The constant work and attention to\ndetail have left me drained.", 50, GREY); newline(); newline();
	MyText.printText("Nell's been my rock throughout this process, keeping me motivated even when I feel like I can't go on.", 50, GREY); newline();
	MyText.printText("But despite her support, I just can't shake this feeling of fatigue. I can't help but wonder if there's something\nelse that's been keeping me low.", 50, GREY); newline(); newline();
	MyText.printText("I'll push through, knowing that our dream home is finally within reach.", 50, GREY); newline();
	MyText.printText("Hopefully, some rest will help rejuvenate me again.", 50, GREY); newline(); newline();
	MyText.printText("- A\"", 50, GREY);
}

void note_9() {
	
	MyText.clearOld();
	newline();

	MyText.printText("The note reads:", 50); newline(); newline();

	MyText.printText("\"To whom it may concern,", 50, GREY); newline(); newline();
	MyText.printText("I say, there's a bloody nuisance of a leak in the pipe! It's dripping like a bloomin' waterfall, and I'm in a right pickle about it. ", 50, GREY); newline();
	MyText.printText("Would you kindly pop round and sort this ruddy mess out? Can't be arsed to deal with it myself, if I'm honest.", 50, GREY); newline(); newline();
	MyText.printText("So, if you could bloody hurry up and get it fixed, that would be smashing!", 50, GREY);

}