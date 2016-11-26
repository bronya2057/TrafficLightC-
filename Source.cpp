#include "Source.h" //TODO THREAD stop start from other thread and fix time left to execute

bool stopLight;


int main()
{

	std::string userInput;
	std::thread lightControlThread(turnOnLight);     // spawn new thread that calls 
	std::thread userInputThread(waitUserResponce);  // spawn new thread that calls 

	std::cout << "WELCOME TO TRAFFIC LIGHT";
	_sleep(1000);
	

	lightControlThread.join();                // pauses until first finishes
	userInputThread.join();               // pauses until second finishes
	return 0;
}

void pause_thread(int n)
{
	std::this_thread::sleep_for(std::chrono::seconds(n));
	std::cout << "pause of " << n << " seconds ended\n";
}

void turnOnLight()
{
	TrafficLight light;//TODO RUNcycle and STOP cycle
	bool isGoingDown = true;
	
	int timePassed;

	while (true)
	{
		
		if (isGoingDown)
		{
			light.drawRed();
			_sleep(1000);
			checkState();
			light.blinkYellow();
			checkState();
			light.drawGreen();
			_sleep(2000);
			isGoingDown = false;
		}
		else
		{
			checkState();
			light.blinkYellow();
			isGoingDown = true;
		}
		
		
		
		
	}
}
void waitUserResponce()
{
	
	while(true)
	{
		
		/*_sleep(1000);
		std::cout << "FUCK";*/
		//std::cout << std::cin.get();
		std::string userInput;
		std::getline(std::cin, userInput);
		const int stringSize = userInput.length();
		std::cout << "The total number of characters entered is: " << stringSize << std::endl;
		if (stringSize > 1)
		{
			std::cout << "FUUUUCLK";
			
		}
		else if(userInput =="P")
		{
			stopLight = true;
		}
		else if (userInput=="S")
		{
			stopLight = false;
		}
		else if (userInput == "E")
			exit(0);
		
	}

}

void checkState()
{
	if (stopLight)
	{
		do
		{
			_sleep(1000);
			std::cout << "PAUSE";
		} while (stopLight);
	}
}
