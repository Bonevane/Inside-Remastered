#include "Memories.h"

// Memory 1 (Unlocked via the sketchbook)


void memory_1()
{

	music_mem1.play();	bgm.play();
	bgm.setVolume(10);	sleep(300);

	MyText.clearOld();

	MyText.printText("The sun, dipped below the horizon, cast a warm glow over the cliffside...", 70, GREY, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("I stood there with my canvas perched on the easel, capturing the last moments of daylight...", 70, GREY, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	//Adrian
	MyText.printText("\"Excuse me. Mind if I share the view?\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("A stranger stood a few feet away, with a camera slung across his shoulder...", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	
	//Nell
	MyText.printText("\"Sure. Help yourself. It's a specatcular view isn't it?\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	//Adrian
	MyText.printText("\"Yea, i've heard this spot's perfect for capturing the night stars.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("\"Oh, name's Adrian, by the way...\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	
	//Nell
	MyText.printText("\"Nell. A painter, if you couldn't tell.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();
	
	//Adrian
	MyText.printText("\"Nell...That's a nice name.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("\"Well, i'm a photographer.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("\"I was hoping to snag some shots of the stars tonight.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("\"Mind if I set up next to you?\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	//Nell
	MyText.printText("\"Oh not at all.\"", 45, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("I could sense the passion behind his eyes as he spread out his equipment and began setting it up.", 70, GREY, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	//Adrian
	MyText.printText("\"Ever painted under the stars?\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	//Nell
	MyText.printText("\"Not really.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();
	MyText.printText("\"But the idea of capturing the night sky has its allure.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	//Adrian
	MyText.printText("\"Then I guess we're both chasing something magical tonight...\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	//Nell
	MyText.printText("\"I suppose so.\"", 60, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();


	MyText.printText("The night unfolded, stars emerging like scattered diamonds across the vast canvas of the sky.", 65, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("Adrian's camera clicked softly, capturing the celestial dance, while I blended colors to recreate the mystique of the night.", 65, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("Hours passed, and our distinct art forms merged into a shared experience.", 65, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	//MyText.printText("The cliff, stars, and sea whispers bore witness to the collaboration of a painter and a photographer,\nbound by a love for the magic in the universe's canvas.", 65, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("Each brushstroke echoed the quiet click of Adrian's camera, creating a symphony beneath the vast night sky.", 65, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("In the soft dawn glow, as the echoes of our collaboration lingered, I sensed this night...", 65, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("This night, beneath the stars with Adrian, held a special place in the gallery of my heart...", 65, GREY, 0, 0, 1, 1); pause(1); 

	fadeOut(); MyText.clearOld();
	// Music STOP
	for (float i = 100; i >= 0; i = i - 1) {
		bgm.setVolume(i-80);
		music_mem1.setVolume(i);
		Sleep(30);
	}
	music_mem1.stop();
	bgm.stop();

	sleep(1000); interest++;
}


//********************************************************************************************************************************************************************
//*******************************************************************************************************************************************************************


// Thing that plays after the level end
// Just for artistic purposes


void mem_1e()
{
	print_HUD = false;

	MyText.clearOld(); sleep(500);

	MyText.printText("\"Even if every star in the night sky fades.\"", 80, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("\"Even if everyone else forgets.\"", 80, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("\"Even if all of this never happened.\"", 80, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("\"I will still remember...\"", 80, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC);

	/*if (hasSketch)
	{
		MyText.printText("\"Even if every star in the night sky fades.\"", 80, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
		MyText.printText("\"Even if everyone else forgets.\"", 80, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
		MyText.printText("\"Even if all of this never happened.\"", 80, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
		MyText.printText("\"I will still remember...\"", 80, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC);
	}
	else
	{
		MyText.printText("\"It's too late, Nell.\"", 80, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
		MyText.printText("\"There's nothing we can do anymore...\"", 80, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC);
	}*/
		
	pause(1);
	MyText.clearOld();
	fadeOut();

}


//********************************************************************************************************************************************************************
//********************************************************************************************************************************************************************


void memory_1_End() {

	int cursor_x, cursor_y, pos, button;

	music_mem1.play();	bgm.play();
	bgm.setVolume(10);	music_mem1.setPitch(0.9);	sleep(300);


	MyText.clearOld();

	MyText.printText("The sun, dipped below the horizon, casts a warm glow over the cliffside...", 70, GREY, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("You stand there with your canvas perched on the easel, capturing the last moments of daylight...", 70, GREY, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	//Adrian
	MyText.printText("Enjoying the view, Nell?", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("Adrian stands a few feet away, with a camera slung across his shoulder.", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	//Nell
	MyText.printText("\"Yeah...\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();
	MyText.printText("\"It's a spectacular view isn't it?\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	//Adrian
	MyText.printText("Oh absolutely.", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	//Nell
	MyText.printText("\"Reminds me of the time we first met here.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();
	MyText.printText("\"It was the first time I ever painted under the stars.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();
	MyText.printText("\"It sure feels a long time ago now.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();
	MyText.printText("\"Oh how far we've come since then.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	//Adrian
	MyText.printText("Yeah.", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	//Nell
	MyText.printText("\"Hey, you seem awfully quiet today.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();
	MyText.printText("\"Is everything alright?\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	//Adrian
	MyText.printText("...", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	//Nell
	MyText.printText("\"Adrian?\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	//Adrian
	MyText.printText("Oh yeah... It's nothing.", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("I just wanted to ask you something.", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();


	//Nell
	MyText.printText("\"Sure, go ahead.\"", 60, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	//Adrian
	MyText.printText("Do you think we can stay like this forever?", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause();
	MyText.printText("Of Course.", 80, GREY, 0, MID_Y + (FONT_SIZE * 3), 1, 0, FONT_SIZE, false, 0);

	cursor_x = MID_X - 100;
	cursor_y = MID_Y + (FONT_SIZE * 3);
	pos = 0;

	while (1) {
		handleEvents();

		MyText.clearOld(); 
		MyText.printText("Do you think we can stay like this forever?", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, true, ITALIC);
		MyText.printText("Of Course.", 80, GREY, 0, MID_Y + (FONT_SIZE * 3), 1, 0, FONT_SIZE, true, 0);

		button = printCursor(cursor_x, cursor_y);
		sleep(200);

		if (button == 2)
			break;
	}

	MyText.clearOld();

	MyText.printText("I see.", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	music_mem1.stop();
	bgm.stop();

	MyText.printText("T H E N  W H Y  D I D  Y O U  K I L L  M E?", 100, RED, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(1); MyText.clearOld(); MyText.printText("", 0); sleep(2000);

	music_mem1.setPitch(1);
}



// Secret Ending (Jumping off the cliff) 
// Included here because a separate file for just 1 ending makes little sense
void ending_1()
{
	MyText.clearOld();
	MyText.printText("Despite thinking twice, you decide to jump off the cliff...", 60, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("Time seemed to both stretch and compress, creating a surreal dance with gravity.", 60, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("Amidst the descent, you feel a peculiar mix of exhilaration and apprehension, like butterflies fluttering in the pit of one's stomach.", 60, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("The sensation of weightlessness painting a canvas of fleeting euphoria.", 60, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("Then came the impact, a sudden and jarring meeting of body and ground.", 60, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("The world quivered momentarily, resonating with the visceral experience of a decision made manifest.", 60, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("A symphony of sensations unfolded, from the visceral crunch to the aftermath of the meeting of earth and form.", 60, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("As you lay still, a subtle question tiptoes into your fading consciousness...", 60, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("What was it that you wished to accomplish?...", 70, GREY, 0, 0, 1, 1); pause(1);

	credits_bad();	exit(1);
}