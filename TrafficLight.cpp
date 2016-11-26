#include "TrafficLight.h"

TrafficLight::TrafficLight()
{
	
}

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

void TrafficLight::blinkYellow() const
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

void TrafficLight::turnOnLight()
{
	bool isGoingDown = true;

	while (true)
	{

		if (isGoingDown)
		{
			drawRed();
			_sleep(1000);
			checkState();
			blinkYellow();
			checkState();
			drawGreen();
			_sleep(2000);
			isGoingDown = false;
		}
		else
		{
			checkState();
			blinkYellow();
			isGoingDown = true;
		}




	}
}

void TrafficLight::checkState() const
{
	if (userInput.getState())
	{
		do
		{
			_sleep(1000);
			std::cout << "PAUSE";
		} while (userInput.getState());
	}
}

	

