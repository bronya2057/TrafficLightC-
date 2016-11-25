#include "Source.h"

int main()
{
	
	std::thread first(turnOnLight);     // spawn new thread that calls 
	std::thread second(waitUserResponce);  // spawn new thread that calls 

	// synchronize threads:

	first.join();                // pauses until first finishes
	second.join();               // pauses until second finishes
	
	return 0;
}

void turnOnLight()
{
	TrafficLight light;//TODO RUNcycle and STOP cycle
	bool isGoingDown = true;
	while (true)
	{
		if (isGoingDown)
		{

			light.drawRed();
			_sleep(1000);
			light.blinkYellow();
			light.drawGreen();
			_sleep(2000);
			isGoingDown = false;
		}
		else
		{
			light.blinkYellow();
			isGoingDown = true;
		}
	}
}
void waitUserResponce()
{
	while(true)
	{
		_sleep(1000);
		std::cout << "FUCK";
		
	}

}