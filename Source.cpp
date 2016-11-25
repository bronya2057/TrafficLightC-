#include <iostream>
#include <ctime>	//Check time
#include "TrafficLight.h"


int main()
{
	
	TrafficLight light;
	bool isGoingDown = true;
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
	return 0;
}
