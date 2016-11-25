#include "TrafficLight.h"

void TrafficLight::drawRed() const
{
	for (int i = 0; i < lightHeight; i++)
	{
		for (int j = 0; j < lightWidth; j++)
			std::cout << lightRed[i][j];
		std::cout << "\n";
	}
	_sleep(1000);
}

void TrafficLight::blinkYellow()
{
	lightActivationTime = std::clock();
	for (int yellowBlink = 0; yellowBlink<4; yellowBlink++)
	{
		_sleep(1000);
		system("cls");
		currentTime = std::clock() - lightActivationTime;
		bool isEvenTime = ((currentTime - currentTime % 1000) / 1000) % 2;
		if (isEvenTime == 0)
		{
			for (int i = 0; i < lightHeight; i++)
			{
				for (int j = 0; j < lightWidth; j++)
					std::cout << light[i][j];
				std::cout << "\n";
			}
		}
		else
		{
			for (int i = 0; i < lightHeight; i++)
			{
				for (int j = 0; j < lightWidth; j++)
					std::cout << lightYellow[i][j];
				std::cout << "\n";
			}
		}
	}
	system("cls");
}

void TrafficLight::drawGreen() const
{
	for (int i = 0; i < lightHeight; i++)
	{
		for (int j = 0; j < lightWidth; j++)
			std::cout << lightGreen[i][j];
		std::cout << "\n";
	}
	_sleep(2000);
}

