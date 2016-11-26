#include "TrafficLight.h"

void TrafficLight::drawEmpty() const
{
	for (int i = 0; i < lightHeight; i++)
	{
		for (int j = 0; j < lightWidth; j++)
			std::cout << light[i][j];
		std::cout << "\n";
	}
}

void TrafficLight::drawRed() const
{
	_sleep(1000);
	system("cls");
	for (int i = 0; i < lightHeight; i++)
	{
		for (int j = 0; j < lightWidth; j++)
			std::cout << lightRed[i][j];
		std::cout << "\n";
	}

}

void TrafficLight::blinkYellow()
{
	std::clock_t lightActivationTime = std::clock();
	int currentTime;
	for (int yellowBlink = 0; yellowBlink<4; yellowBlink++)
	{
		_sleep(1000);
		system("cls");
		currentTime = std::clock() - lightActivationTime;

		bool isEvenTime = ((currentTime - currentTime % 1000) / 1000) % 2;

		if (isEvenTime == 0)
		{
			drawEmpty();
		}
		else
		{
			drawYellow();
		}
	}
	
}

void TrafficLight::drawYellow() const
{
	for (int i = 0; i < lightHeight; i++)
	{
		for (int j = 0; j < lightWidth; j++)
			std::cout << lightYellow[i][j];
		std::cout << "\n";
	}
}

void TrafficLight::drawGreen() const
{
	_sleep(1000);
	system("cls");
	for (int i = 0; i < lightHeight; i++)
	{
		for (int j = 0; j < lightWidth; j++)
			std::cout << lightGreen[i][j];
		std::cout << "\n";
	}
}

void TrafficLight::pauseSimulation()
{

}


