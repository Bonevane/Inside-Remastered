#include "Enemy.h"


// Final encounter!
// Branching paths depending on what you choose.

void used_Knife() {
	bgm.setVolume(0);
	knife_stab.play(); 
	sleep(3000);

	credits_bad();
	exit(1);
}

void boss() {
	int cursor_x, cursor_y, pos, button;
	bool temp;

	print_HUD = false;
	MyText.clearOld();
	sleep(1000);

	MyText.printText("The moonlight bathes the scene in a melancholic glow as you stand beneath the weight of your actions...", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("Nell.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("Before you stands a reflection of your own past.", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("It has been a long time coming...", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("Ever since that day.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("That mask that you've been wearing.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("Everything you've done.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("It will all end here.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("Where it all began.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("So tell me, Nell.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld(); bgm.setVolume(2);
	MyText.printText("W h y  d i d n ' t  y o u  s t o p  h i m ?", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld(); bgm.setVolume(20);
	MyText.printText("Well...", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("It doesn't matter.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("We both know it's too late.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("Nothing we do is going to bring him back.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("Instead...I want you to do us a favour.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("I want you to free us of this pain.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("I want you to finish what we started.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("What will you do?", 80, YELLOW, 0, 0, 1, 1, FONT_SIZE);
	MyText.printText("Use Knife", 80, WHITE, 0, MID_Y + (FONT_SIZE * 3), 1, 0, FONT_SIZE);
	MyText.printText("Refuse", 80, WHITE, 0, MID_Y + (FONT_SIZE * 5), 1, 0, FONT_SIZE);

	cursor_x = MID_X - 120;
	cursor_y = MID_Y + (FONT_SIZE * 3);
	pos = 0; temp = true;

	while (temp) {
		handleEvents();

		MyText.clearOld();
		MyText.printText("What will you do?", 80, YELLOW, 0, 0, 1, 1, FONT_SIZE, true);
		MyText.printText("Use Knife", 80, WHITE, 0, MID_Y + (FONT_SIZE * 3), 1, 0, FONT_SIZE, true);
		MyText.printText("Refuse", 80, WHITE, 0, MID_Y + (FONT_SIZE * 5), 1, 0, FONT_SIZE, true);

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
			if (pos == 0)
				temp = false;
			else if (pos == 1) {
				temp = false;
			}
			break;
		}
	}

	if (pos == 0)
		used_Knife();
		
	MyText.clearOld();
	MyText.printText("...", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("I understand.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("But I must ask...", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("What will you gain by running from the truth?", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("We both know there is no other choice.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("So why do you still hold on?", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("...", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("What will you do?", 80, YELLOW, 0, 0, 1, 1, FONT_SIZE);
	MyText.printText("Use Knife", 80, WHITE, 0, MID_Y + (FONT_SIZE * 3), 1, 0, FONT_SIZE);
	MyText.printText("Refuse", 80, WHITE, 0, MID_Y + (FONT_SIZE * 5), 1, 0, FONT_SIZE);

	cursor_x = MID_X - 120;
	cursor_y = MID_Y + (FONT_SIZE * 3);
	pos = 0; temp = true;

	while (temp) {
		handleEvents();

		MyText.clearOld();
		MyText.printText("What will you do?", 80, YELLOW, 0, 0, 1, 1, FONT_SIZE, true);
		MyText.printText("Use Knife", 80, WHITE, 0, MID_Y + (FONT_SIZE * 3), 1, 0, FONT_SIZE, true);
		MyText.printText("Refuse", 80, WHITE, 0, MID_Y + (FONT_SIZE * 5), 1, 0, FONT_SIZE, true);

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
			if (pos == 0)
				temp = false;
			else if (pos == 1) {
				temp = false;
			}
			break;
		}
	}

	if (pos == 0)
		used_Knife();

	MyText.clearOld();
	MyText.printText("I see.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("It's all too pathetic, don't you think?", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("After all that time...", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("I don't understand why i'm so hesitant.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("But you know...", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("It will all end soon.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("We'll get to meet him again.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld(); bgm.setVolume(2);
	MyText.printText("T O G E T H E R", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld(); bgm.setVolume(20);

	MyText.printText("What will you do?", 80, YELLOW, 0, 0, 1, 1, FONT_SIZE);
	MyText.printText("Use Knife", 80, WHITE, 0, MID_Y + (FONT_SIZE * 3), 1, 0, FONT_SIZE);
	MyText.printText("Refuse", 80, WHITE, 0, MID_Y + (FONT_SIZE * 5), 1, 0, FONT_SIZE);

	cursor_x = MID_X - 120;
	cursor_y = MID_Y + (FONT_SIZE * 3);
	pos = 0; temp = true;

	while (temp) {
		handleEvents();

		MyText.clearOld();
		MyText.printText("What will you do?", 80, YELLOW, 0, 0, 1, 1, FONT_SIZE, true);
		MyText.printText("Use Knife", 80, WHITE, 0, MID_Y + (FONT_SIZE * 3), 1, 0, FONT_SIZE, true);
		MyText.printText("Refuse", 80, WHITE, 0, MID_Y + (FONT_SIZE * 5), 1, 0, FONT_SIZE, true);

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
			if (pos == 0)
				temp = false;
			else if (pos == 1) {
				temp = false;
			}
			break;
		}
	}

	if (pos == 0)
		used_Knife();

	MyText.clearOld();

	if (interest < 6) {
		MyText.printText("So that's how it is.", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
		MyText.printText("It seems that you still do not understand what you truly want.", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
		MyText.printText("Deep down, we both know that it is the end of the line for us.", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
		MyText.printText("But you refuse to accept it.", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
		MyText.printText("Hiding behind that mask.", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
		MyText.printText("But it no longer matters.", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
		MyText.printText("Soon, you will finally understand.", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
		MyText.printText("W e l c o m e  h o m e ,  N e l l .", 70, RED, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); sleep(500); knife_stab.play(); sleep(1000);

		MyText.clearOld();  sleep(1500);

		credits_bad();
		exit(1);
	}

	MyText.printText("...", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("I don't understand.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("Why do you still bother?", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("Is it all worth fighting for?", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("You could end it right now...", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("So why?", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("Why do you still bother?", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("There is no point to what you are doing.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("We're stuck in this endless loop of despair.", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("Forever...", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("...", 100, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("...", 100, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("...", 100, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("tell me, nell.", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("do you truly believe that he will forgive us for what we've done?", 80, YELLOW, 0, 0, 1, 1, FONT_SIZE, false, ITALIC);
	MyText.printText("Yes", 80, WHITE, 0, MID_Y + (FONT_SIZE * 3), 1, 0, FONT_SIZE);
	MyText.printText("No", 80, WHITE, 0, MID_Y + (FONT_SIZE * 5), 1, 0, FONT_SIZE);

	cursor_x = MID_X - 100;
	cursor_y = MID_Y + (FONT_SIZE * 3);
	pos = 0; temp = true;

	while (temp) {
		handleEvents();

		MyText.clearOld();
		MyText.printText("do you truly believe that he will forgive us for what we've done?", 80, YELLOW, 0, 0, 1, 1, FONT_SIZE, true, ITALIC);
		MyText.printText("Yes", 80, WHITE, 0, MID_Y + (FONT_SIZE * 3), 1, 0, FONT_SIZE, true);
		MyText.printText("No", 80, WHITE, 0, MID_Y + (FONT_SIZE * 5), 1, 0, FONT_SIZE, true);

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
			if (pos == 0)
				temp = false;
			else if (pos == 1) {
				temp = false;
			}
			break;
		}
	}

	MyText.clearOld();

	for (float i = 10; i > 0; i--) {
		bgm.setVolume(i);
		sleep(10);
	}

	if (pos == 0) {
		train.play();
		MyText.printText("I see...", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("You've changed, Nell.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("That night.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("We had forgotten.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("We had forgotten the time we spent with him.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("We had forgotten his feelings.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("...", 55, WHITE, 0, 0, 1, 1); sleep(1500); MyText.clearOld();
		MyText.printText("We both regret what we said that night.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("There's no going back.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("We cannot change the past.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("But still...", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("We can still hope.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("That someday, he will forgive us.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("...", 55, WHITE, 0, 0, 1, 1); sleep(1500); MyText.clearOld();
		MyText.printText("And Nell...", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("Thank you for remembering him.", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); sleep(4000); MyText.clearOld();
	}
	else {
		memory.play();
		MyText.printText("I see...", 55, WHITE, 0, 0, 1, 1); sleep(2000); MyText.clearOld();
		MyText.printText("If that is the case...", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("You've changed, Nell.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("You've changed, beyond what I can understand.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("It's strange, isn't it?", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("I can no longer recognize myself.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("Nor can I understand myself...", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("Why is it that you still want to continue...", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("But if that is what you truly want.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("Then I cannot do much to stop you.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("But at the very least...", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("I wish that you'd forgive me...Nell.", 55, WHITE, 0, 0, 1, 1); sleep(2500); MyText.clearOld();
		MyText.printText("Thank you, Nell.", 55, WHITE, 0, 0, 1, 1); sleep(4000); MyText.clearOld();
	}

	for (float i = 100; i < 0; i--) {
		memory.setVolume(i);
		train.setVolume(i);
		sleep(10);
	}

	credits_good();
	exit(1);
}


/*
void boss()
{
	int cursor_x, cursor_y, pos, button, choice;

	print_HUD = false;
	MyText.clearOld();
	sleep(1000);

	MyText.printText("...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("I t ' s  a l l  m y  f a u l t . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("I  k i l l e d  h i m . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("I  s e n t  h i m  t o  h i s  d e a t h . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	
	MyText.printText("D o n ' t  y o u  a g r e e . . . N e l l ?", 70, RED, 0, 0, 1, 1); pause();
	MyText.printText("Yes", 50, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0);
	MyText.printText("No", 50, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0);

	cursor_x = MID_X - 100;
	cursor_y = MID_Y + (FONT_SIZE * 7);
	pos = 0; choice = -1;

	while (choice == -1) {
		handleEvents();

		MyText.clearOld();
		MyText.printText("D o n ' t  y o u  a g r e e . . . N e l l ?", 70, RED, 0, 0, 1, 1, FONT_SIZE, true);
		MyText.printText("Yes", 50, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0, FONT_SIZE, true);
		MyText.printText("No", 50, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0, FONT_SIZE, true);

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
			choice = pos;
			break;
		}
	}

	MyText.clearOld();


	// Choice 1 (Just for the sake of making the player realize there's choices)

	if (choice == 0)
	{
		MyText.printText("I  s e e . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I t  s e e m s  y o u  u n d e r s t a n d  w h a t  y o u ' v e  d o n e . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I  c a n ' t  f o r g i v e  y o u  f o r  i t  e i t h e r  y o u  k n o w . . .", 100, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	}
	else
	{
		MyText.printText("I  s e e . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("Y o u ' r e  s t i l l  t o o  n a i v e  t o  u n d e r s t a n d  t h e  w e i g h t  o f  y o u r  a c t i o n s . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I  s u p p o s e  i t ' s  f o r  t h e  b e s t . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("O r  p e r h a p s . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("P e r h a p s  y o u  a r e  s t i l l  r u n n i n g  a w a y  f r o m  t h e  t r u t h . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	}

	MyText.printText("B u t  I  u n d e r s t a n d . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("I ' m  t h e  s a m e  a s  y o u ,  y o u  r e a l i z e ?", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("I  t h o u g h t  I  w o u l d ' v e  f o r g o t t e n  a n d  m o v e d  o n . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("B u t  h e r e  w e  a r e . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("S t i l l  r e m i n i s c i n g  o v e r  t h e  p a s t . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("W e l l . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("D o  y o u  s t i l l  r e m e m b e r ?", 50, RED, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("D o  y o u  s t i l l  r e m e m b e r  w h a t  m a d e  t h a t  e v e n i n g  s o  s p e c i a l ?", 70, RED, 0, 0, 1, 1); pause();
	MyText.printText("The stars", 50, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0);
	MyText.printText("The cliff", 50, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0);
	MyText.printText("The house", 50, WHITE, 0, MID_Y + (FONT_SIZE * 11), 1, 0);

	cursor_x = MID_X - 100;
	cursor_y = MID_Y + (FONT_SIZE * 7);
	pos = 0; choice = -1;

	while (choice == -1) {
		handleEvents();

		MyText.clearOld();
		MyText.printText("D o  y o u  s t i l l  r e m e m b e r  w h a t  m a d e  t h a t  e v e n i n g  s o  s p e c i a l ?", 70, RED, 0, 0, 1, 1, FONT_SIZE, true);
		MyText.printText("The stars", 50, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0, FONT_SIZE, true);
		MyText.printText("The cliff", 50, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0, FONT_SIZE, true);
		MyText.printText("The house", 50, WHITE, 0, MID_Y + (FONT_SIZE * 11), 1, 0, FONT_SIZE, true);

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
			choice = pos;
			break;
		}
	}

	MyText.clearOld();
	

	// Actual first branch

	if (choice == 0)
	{
		MyText.printText("I  g u e s s  d e e p  d o w n  I  n e v e r  t r u l y  g a v e  u p  o n  t h e  p a s t . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I s n ' t  t h a t  s e l f i s h ?", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("A f t e r  a l l  t h a t  t i m e  w e  s p e n t . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I  w e n t  a n d  d e s t r o y e d  a l l  o f  i t . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("W e  w e r e  s o  n a i v e  b a c k  t h e n . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("W h a t  w e n t  s o  w r o n g . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I f  I  h a d  a n o t h e r  c h a n c e . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I f  o n l y  I  c o u l d  g o  b a c k  a n d  c h a n g e  i t  a l l . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I f  o n l y  I  c o u l d . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I  k n o w  y o u  w a n t  t o . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I ' m  y o u  a f t e r  a l l . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();

		MyText.printText("W h a t  w o u l d  y o u  c h a n g e  i f  y o u  h a d  t h e  c h o i c e ?", 70, RED, 0, 0, 1, 1); pause();
		MyText.printText("The wedding", 50, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0);
		MyText.printText("Last words", 50, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0);
		MyText.printText("No reply", 50, WHITE, 0, MID_Y + (FONT_SIZE * 11), 1, 0);

		cursor_x = MID_X - 100;
		cursor_y = MID_Y + (FONT_SIZE * 7);
		pos = 0; choice = -1;

		while (choice == -1) {
			handleEvents();

			MyText.clearOld();
			MyText.printText("W h a t  w o u l d  y o u  c h a n g e  i f  y o u  h a d  t h e  c h o i c e ?", 70, RED, 0, 0, 1, 1, FONT_SIZE, true);
			MyText.printText("The wedding", 50, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0, FONT_SIZE, true);
			MyText.printText("Last words", 50, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0, FONT_SIZE, true);
			MyText.printText("No reply", 50, WHITE, 0, MID_Y + (FONT_SIZE * 11), 1, 0, FONT_SIZE, true);

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
				choice = pos;
				break;
			}
		}

		MyText.clearOld();


		// Branch 2

		if (choice == 1)
		{
			MyText.printText("You know...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("I thought I had forgotten.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("After all...I hid those feelings deep within myself.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("I wanted to be free of this guilt.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("I didn't mean those words.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("I wish I could talk to him one last time.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("I wish I could say a proper goodbye.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("...", 100, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("Nell...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("Can we forgive ourselves?", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();


			MyText.printText("Do you think he will forgive us for what we've done?", 70, RED, 0, 0, 1, 1); pause();
			MyText.printText("Yes", 50, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0);
			MyText.printText("No", 50, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0);

			cursor_x = MID_X - 100;
			cursor_y = MID_Y + (FONT_SIZE * 7);
			pos = 0; choice = -1;

			while (choice == -1) {
				handleEvents();

				MyText.clearOld();
				MyText.printText("Do you think he will forgive us for what we've done?", 70, RED, 0, 0, 1, 1, FONT_SIZE, true);
				MyText.printText("Yes", 50, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0, FONT_SIZE, true);
				MyText.printText("No", 50, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0, FONT_SIZE, true);

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
					choice = pos;
					break;
				}
			}

			MyText.clearOld();


			// Branch 3

			if (choice == 0)
			{
				MyText.printText("I see...", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("You've changed, Nell.", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("That moment...", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("On that call.", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I had forgotten.", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I couldn't forgive myself for what i'd done.", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("But I had forgotten his feelings.", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I had forgotten the passion we shared.", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("Forgotten the time we spent.", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("But you've made me remember.", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I'm sure he'll forgive us.", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("Despite everything we've done.", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("And Nell...", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I wish that you'd forgive me too...", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("For burying all those memories.", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("For running away...", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("Please.", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("Forgive me...", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("...", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("And Nell...", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("Thank you for remembering him.", 90, WHITE, 0, 0, 1, 1); pause(1);
			}
			else
			{
				MyText.printText("I see...", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("If that's how it is...", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I suppose there's not much we can do...", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("But at the very least...", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I wish that you'd forgive me...Nell.", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("For burying all those memories.", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("For running away...", 70, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("Forgive me...Nell", 70, WHITE, 0, 0, 1, 1); pause();
			}

			fadeOut();
			stopLevelMusic();
			credits_good();
			exit(1);
		}

		else
		{
			MyText.printText("I  s e e . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("S t i l l  r u n n i n g  a w a y  a f t e r  a l l  t h a t  t i m e . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();

			if (choice == 2)
			{
				MyText.printText("A l t h o u g h  y o u ' v e  b e e n  r u n n i n g  a w a y  f r o m  r e a l i t y  f o r  f a r  t o o  l o n g . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("D o i n g  n o t h i n g  w o n ' t  f i x  a n y t h i n g . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			}
			else
			{
				MyText.printText("Y o u  w a n t  t o  e r a s e  a l l  t h e  g o o d  m e m o r i e s  y o u ' v e  h a d  w i t h  h i m ?", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I  s u p p o s e  s o m e  t h i n g s  n e v e r  c h a n g e . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			}
			
			MyText.printText("W e l l . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("Y o u  s e e . . . e v e n  i f  I  c o u l d  c h a n g e  t h e  p a s t . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("I ' m  s u r e  w e  w o u l d ' v e  e n d e d  u p  w i t h  a  s i m i l a r  f a t e . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("D o n ' t  y o u  a g r e e ?", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("A c t u a l l y .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("D o n ' t  a n s w e r  t h a t . . .", 60, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("I n s t e a d . . . I  w a n t  t o  k n o w . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText(". . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("N e l l . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("D o  y o u  b e l i e v e  i n  c h a n g e ?", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();

			MyText.printText("D o  y o u  b e l i e v e  t h a t  w e  c a n  f o r g i v e  o u r s e l v e s  f o r  w h a t  w e ' v e  d o n e ?", 70, RED, 0, 0, 1, 1); pause();
			MyText.printText("Yes", 50, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0);
			MyText.printText("No", 50, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0);

			cursor_x = MID_X - 100;
			cursor_y = MID_Y + (FONT_SIZE * 7);
			pos = 0; choice = -1;

			while (choice == -1) {
				handleEvents();

				MyText.clearOld();
				MyText.printText("D o  y o u  b e l i e v e  t h a t  w e  c a n  f o r g i v e  o u r s e l v e s  f o r  w h a t  w e ' v e  d o n e ?", 70, RED, 0, 0, 1, 1, FONT_SIZE, true);
				MyText.printText("Yes", 50, WHITE, 0, MID_Y + (FONT_SIZE * 7), 1, 0, FONT_SIZE, true);
				MyText.printText("No", 50, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0, FONT_SIZE, true);

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
					choice = pos;
					break;
				}
			}

			MyText.clearOld();


			//Branch 4

			if (choice == 0)
			{
				music[level].stop();
				MyText.printText("I see...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I thought I had forgotten.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("After all...I hid those feelings deep within myself.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I wanted to be free of this guilt.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I suppose there's not much we can do...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("But at the very least...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I wish that you'd forgive me...Nell.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("For burying all those memories.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("For running away...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("And I wish that you forgive yourself, too.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("Goodbye...Nell.", 120, RED, 0, 0, 1, 1); pause(1);

				credits_good();
				exit(1);
			}
			else
			{
				MyText.printText("H a h a . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I  k n e w  a s k i n g  m y s e l f  w o u l d  b e  p o i n t l e s s . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I  k n e w  w h a t  y o u ' d  s a y  a n y w a y s .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I t ' s  a l l  p o i n t l e s s . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("T h e r e ' s  n o  p o i n t  l i v i n g  w i t h o u t  a n y  c h a n c e  a t  r e d e m p t i o n . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("H e ' s  g o n e  n o w . . . A n d  t h e r e ' s  n o  c h a n g i n g  t h a t . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("B u t  y o u  k n o w . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			}
		}
		
	}
	else
	{
		MyText.printText("H a h a . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I t ' s  f u n n y . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I  k n e w  y o u  w o u l d n ' t  r e m e m b e r .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("B u t  d o n ' t  w o r r y . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I  c a n 't  r e m e m b e r  e i t h e r . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("A f t e r  b l a m i n g  m y s e l f  f o r  s o  l o n g . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I  s e e m  t o  h a v e  f o r g o t t e n  w h y  I  e v e n  b o t h e r e d  t o  c o n t i n u e . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();

		MyText.printText("I  s u p p o s e  t h e r e ' s  n o t  m u c h  l e f t  f o r  u s  t o  d o  t h e n . . .", 70, RED, 0, 0, 1, 1); pause();
		MyText.printText("Give Up", 50, RED, 0, MID_Y + (FONT_SIZE * 7), 1, 0);
		MyText.printText("Continue", 50, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0);

		cursor_x = MID_X - 100;
		cursor_y = MID_Y + (FONT_SIZE * 7);
		pos = 0; choice = -1;

		while (choice == -1) {
			handleEvents();

			MyText.clearOld();
			MyText.printText("I  s u p p o s e  t h e r e ' s  n o t  m u c h  l e f t  f o r  u s  t o  d o  t h e n . . .", 70, RED, 0, 0, 1, 1, FONT_SIZE, true);
			MyText.printText("Give Up", 50, RED, 0, MID_Y + (FONT_SIZE * 7), 1, 0, FONT_SIZE, true);
			MyText.printText("Continue", 50, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0, FONT_SIZE, true);

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
				choice = pos;
				break;
			}
		}

		MyText.clearOld();


		// Branch 5

		if (choice == 1)
		{
			MyText.printText("I  d o n ' t  u n d e r s t a n d . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("W h y  d o  y o u  s t i l l  b o t h e r . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("W h y . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("I s  i t  w o r t h  f i g h t i n g  f o r ?", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("W e  c o u l d  e n d  i t  r i g h t  n o w . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("S o  w h y ?", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("W h y  d o  y o u  s t i l l  b o t h e r . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("I s  i t  b e c a u s e  y o u  s t i l l  h a v e  h o p e ?", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("H e ' s  g o n e . . . N e l l . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			MyText.printText("T h e r e ' s  n o  p o i n t  t o  w h a t  y o u ' r e  d o i n g . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();

			MyText.printText("O r . . . d o  y o u  s t i l l  b e l i e v e  t h a t  i t ' s  w o r t h  f o r g i v i n g  o u r s e l v e s ?", 70, RED, 0, 0, 1, 1); pause();
			MyText.printText("Yes", 50, GREEN, 0, MID_Y + (FONT_SIZE * 7), 1, 0);
			MyText.printText("No", 50, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0);

			cursor_x = MID_X - 100;
			cursor_y = MID_Y + (FONT_SIZE * 7);
			pos = 0; choice = -1;

			while (choice == -1) {
				handleEvents();

				MyText.clearOld();
				MyText.printText("D o n ' t  y o u  a g r e e . . . N e l l ?", 70, RED, 0, 0, 1, 1, FONT_SIZE, true);
				MyText.printText("Yes", 50, GREEN, 0, MID_Y + (FONT_SIZE * 7), 1, 0, FONT_SIZE, true);
				MyText.printText("No", 50, WHITE, 0, MID_Y + (FONT_SIZE * 9), 1, 0, FONT_SIZE, true);

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
					choice = pos;
					break;
				}
			}

			MyText.clearOld();


			// Branch 6 

			if (choice == 0)
			{
				MyText.printText("I see...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I do not understand...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("What makes you so different...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("What makes you hold on...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("Despite everything we've done...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I do not understand...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("But if that's how it is...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I suppose there's not much that I can do...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("But at the very least...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I wish that you'd forgive yourself...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("For burying all those memories.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("And for running away...", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("Goodbye...Nell.", 120, RED, 0, 0, 1, 1); pause(1);


				fadeOut();
				stopLevelMusic();
				credits_good();
				exit(1);
			}
			else
			{
				MyText.printText("H a h a h a . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("T h a t ' s  r i g h t . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("I  k n e w  y o u ' d  u n d e r s t a n d . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
				MyText.printText("B u t  y o u  k n o w . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
			}

		}	
		
	}

	// Worst ending. (The player just didn't pay attention to the storyline.)
	// Very dark.
	music[level].stop();
	if (choice == 0)
		MyText.printText("H a h a h a . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("I s n ' t  i t  a m u s i n g ?", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("A f t e r  a l l  t h e  t i m e  w e  s p e n t. . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("W e ' v e  d e c i d e d  t o  t h r o w  i t  a l l  a w a y . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("You see the shadow grab a knife from the debris beside them.", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("B u t  i t ' s  f i n e . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("I ' m  s u r e  t h i s  i s  w h a t  h e  w a n t e d . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("T h a n k  y o u  f o r  m a k i n g  m e  u n d e r s t a n d . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("A l l  w e  n e e d e d  t o  d o  w a s  t o  a c c e p t  t h e  r e a l i t y . . .", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("T  H  A  T   I  T   W  A  S   A  L  L   O  U  R   F  A  U  L  T ", 70, RED, 0, 0, 1, 1); sleep(500); knife_stab.play(); sleep(1000);

	MyText.clearOld();  sleep(1500);


	credits_bad();
	exit(1);
}
*/