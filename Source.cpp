#include <iostream>
#include <ctime>	//Check time
#include "TrafficLight.h"


int main()
{
	
	TrafficLight light;
	bool isGoingDown = true;
	std::clock_t start;
	int current;
	while (true)
	{

		if (isGoingDown)
		{
			light.drawRed();
			light.blinkYellow();
			light.drawGreen();
			isGoingDown = false;
		}
		else
		{
			light.blinkYellow();
			isGoingDown = true;
		}
	}



	return(0);
}
