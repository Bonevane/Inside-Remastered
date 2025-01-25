#include "Memories.h"

sf::Text scare;

// Memory 4 (No unlocking pre-requisites. Just plays after ending Level 3)
// Slight differences for different things the user picked up along the way
void memory_4()
{
	print_HUD = false;  MyText.clearOld();

	MyText.printText("If only the hands of time could yield to my desperate pleas...", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("If fate would grant me just one more opportunity...", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("The intensity of our argument.", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("The hurtful words we said...now seem insignificant compared to the brewing uncertainty that lay ahead...", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();

	phone.play();
	MyText.printText("...", 70, GREY, 0, 0, 1, 1); sleep(7000); MyText.clearOld();

	MyText.printText("\"Mark? What's going on?\"", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();
	
	//if ((hasSketch == false && hasBPrint == false) || (hasBPrint == false && !hasReport))
		music_mem4.play();

	MyText.printText("\"Nell? Is everything alright?", 45, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("\"Have you heard from Adrian?\"", 45, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("\"No...Not after he left...Why?\"", 55, WHITE, 0, 0, 1, 1); pause(); MyText.clearOld();

	MyText.printText("\"He called me a few minutes ago...\"", 45, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("\"Sounded distressed about something.\"", 45, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("\"I heard a weird screech and the call cut off...\"", 45, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("\"He's not picking up the call anymore...\"", 45, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("If only...I could", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();
	MyText.printText("If only...", 70, GREY, 0, 0, 1, 1); pause(); MyText.clearOld();


	MyText.printText("\"Nell? Are you still with me?\"", 45, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("\"I'll try calling him again.\"", 45, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("\"J u s t  w a i t  a  m o m e n t .\"", 45, WHITE, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();
	MyText.printText("\"I ' l l  c a l l  y o u  b a c k...\"", 45, RED, 0, 0, 1, 1, FONT_SIZE, false, ITALIC); pause(); MyText.clearOld();

	MyText.printText("If only I had stopped him then...", 70, GREY, 0, 0, 1, 1);


	// If the player just ignored all the in-game items...
	// They get this...Just to let them know that they should pay more attention perhaps.


		pause(); MyText.clearOld();
		MyText.printText("It was my fault.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I let him go.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I pushed him away.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("I let my pride overshadow compassion.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();
		MyText.printText("It was my fault.", 70, RED, 0, 0, 1, 1); pause(); MyText.clearOld();

		for (int i = 0; i < 40; i++)
		{
			handleEvents();
			window->clear();
			//MyText.printText("It was all my fault. It was all my fault. It was all my fault. It was all my fault. It was all my fault. It was all my fault. It was all my fault. It was all my fault. It was all my fault.\n", 0, RED, 0, 0, 1, 0, FONT_SIZE, false, rand() % 3, rand() % 4);
			for (int j = 0; j < 50; j++) {
				scare.setString("It was all my fault. It was all my fault. It was all my fault. It was all my fault. It was all my fault. It was all my fault. It was all my fault. It was all my fault. It was all my fault.\n");
				
				switch (rand() % 4) {
				case 0:
					scare.setFont(font);
					break;
				case 1:
					scare.setFont(font_cascadia);
					break;
				case 2:
					scare.setFont(font_georgia);
					break;
				case 3:
					scare.setFont(font_gothic);
					break;
				}
				scare.setPosition(0.0f, (float)j * (FONT_SIZE + 8));
				scare.setFillColor(sf::Color(200, 0, 0, 255));
				scare.setStyle(rand() % 3);

				window->draw(scare);
			}

			window->display(); sleep(10);

			window->clear(); window->display();
		}
		music_mem4.stop();


	MyText.clearOld(); sleep(1000);
}

