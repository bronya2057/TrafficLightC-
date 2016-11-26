#include "TrafficLight.h"


void TrafficLight::drawLight(const std::string someLight[])
{
	for (int i = 0; i < lightHeight; i++)
	{
		std::cout << someLight[i];
		std::cout << "\n";
	}
}

void TrafficLight::blinkYellow() const
{
	std::clock_t lightActivationTime = std::clock();
	int currentTime;
	for (int yellowBlink = 0; yellowBlink<4; yellowBlink++)
	{
		_sleep(1000);
		checkUserInput();
		system("cls");
		currentTime = std::clock() - lightActivationTime;

		bool isEvenTime = ((currentTime - currentTime % 1000) / 1000) % 2;

		if (isEvenTime == 0)
		{
			drawLight(blank);
		}
		else
		{
			drawLight(yellow);
		}
	}
}

void TrafficLight::startSimulation() const
{
	bool isGoingDown = true;

	while (true)
	{
		if (isGoingDown)
		{
			_sleep(1000);
			system("cls");
			drawLight(red);
			_sleep(1000);
			checkUserInput();
			blinkYellow();
			checkUserInput();
			_sleep(1000);
			system("cls");
			drawLight(green);
			_sleep(2000);
			isGoingDown = false;
		}
		else
		{
			checkUserInput();
			blinkYellow();
			isGoingDown = true;
		}
	}
}

void TrafficLight::checkUserInput() const
{
	if (userInput.isChangingState())
	{
		do
		{
			_sleep(1000);
			std::cout << "PAUSE";
		} while (userInput.isChangingState());
	}
}

	

