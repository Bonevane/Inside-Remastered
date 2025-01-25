#include "Memories.h"


// Memory 2 (Unlocked via the house blueprints)
void memory_2()
{
	MyText.clearOld();
	music_mem2.play();	bgm.play();
	bgm.setVolume(10);	sleep(300);

	MyText.printText("The evening sun melted into the sea, casting a golden farewell...", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("We sat on a blanket spread over the grassy knoll, the remnants of our wedding celebration echoed far in the distance.", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("\"Can you believe it's finally done?\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("\"Feels surreal...In a good way, though.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("We clinked our glasses together, toasting to our newly cemented union...", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("\"Remember when we used to come here just to escape?\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("\"Yeah, our little sanctuary.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();
	MyText.printText("\"We've come a long way since then.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();
	MyText.printText("\"You know...I never thought I'd find someone like you.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("\"I hope that's a good thing.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("\"Oh just the best.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("I saw his eyes light up with a glint of enthusiasm...", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("\"I was thinking...\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("\"Hmm?\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("\"What if we built something here?\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld(); MyText.printText("\"Something...to remember.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("\"You mean a sanctuary for ourselves?\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("\"Exactly!\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld(); MyText.printText("\"Our home, on the edge of everything.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
    MyText.printText("\"Our little place of eternity.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
 

	MyText.printText("I let out a small chuckle.", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("\"Haha...I knew you'd say that.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("\"No good?\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("\"Oh no, I love it.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld(); MyText.printText("\"Our own haven.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("\"Exactly my thoughts...\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("...", 120, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("\"Hey.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("\"Yeah?\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("\"You think we'll ever get tired of this view?\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("\"Never.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld(); MyText.printText("\"It's like our personal masterpiece.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("\"But life's going to change now, isn't it?\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("\"I suppose so...But in the best possible way.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("We clasped our hands, a silent promise for the adventures ahead...", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("\"To us, and a lifetime of these moments.\"", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("\"To us...\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(1); 

	fadeOut(); MyText.clearOld();
	// Music STOP
	for (float i = 100; i >= 0; i = i - 1) {
		bgm.setVolume(i - 80);
		music_mem2.setVolume(i);
		Sleep(30);
	}
	music_mem2.stop();
	bgm.stop();

	sleep(1000); interest++;
}


//********************************************************************************************************************************************************************
//********************************************************************************************************************************************************************


// Thing that plays after the level end
// Just for artistic purposes
void mem_2e()
{
	print_HUD = false;
	MyText.clearOld();

	MyText.printText("\"I'll never forget.\"", 80, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("\"I'll carry your heart with me...Always...\"", 80, WHITE, 0, 0, 1, 1);

	/*if (hasBPrint)
	{
		MyText.printText("\"I'll never forget.\"", 80, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("\"I'll carry your heart with me...Always...\"", 80, WHITE, 0, 0, 1, 1);
	}
	else
	{
		MyText.printText("\"If that's how it is...\"", 80, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("\"Maybe this house would be better off without someone so unwilling to fight for their own life.\"", 80, WHITE, 0, 0, 1, 1);
	}*/

	pause(1);
	fadeOut();
	MyText.clearOld();
}


void memory_2_End() {

	MyText.clearOld();
	music_mem2.play();	bgm.play(); music_mem2.setPitch(0.9);
	bgm.setVolume(10);	sleep(300);

	MyText.printText("The evening sun melted into the sea, casting a golden farewell.", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("You sit on a blanket spread over the grassy knoll, the remnants of your past encounter echoing far in the distance.", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("\"Can you believe it's finally done?\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("...", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("You clink your empty glass, a hollow toast to your forgotten union...", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("\"Remember when we used to come here just to escape?\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("...", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("\"Our little sanctuary.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("...", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("\"We've come a long way since then.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("...", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("\"You know...\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();
	MyText.printText("\"I never thought I'd find someone like you either.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("...", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("You let out a small cry.", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("\"Haha...\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();
	MyText.printText("\"This view's kinda tiring, isn't it?\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("...", 50, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("...", 55, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("\"But you know.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();
	MyText.printText("\"It's not too long to go now.\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();
	MyText.printText("\"This will all end soon enough...\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(); MyText.clearOld();

	MyText.printText("You clasp your hands. A silent vow to a once so radiant future.", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("\"To us...\"", 55, WHITE, 0, 0, 1, 1, FONT_SIZE, false); pause(1);

	fadeOut(); MyText.clearOld();
	// Music STOP
	for (float i = 100; i >= 0; i = i - 1) {
		bgm.setVolume(i - 80);
		music_mem2.setVolume(i);
		Sleep(30);
	}
	music_mem2.stop(); music_mem2.setPitch(1);
	bgm.stop();
}