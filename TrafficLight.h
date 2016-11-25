#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H
#include <iostream>
#include <ctime>

class TrafficLight
{
	enum state { RED,YELLOW,GREEN };
	int timeElapsedPause;			//TO SOLVE PROBLEM WITH TIME after PAUSE
	bool isGoingDown;

	static const int lightWidth = 21;
	static const int lightHeight = 21;

	const char light[lightHeight][lightWidth] = {
		"********************",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"********************"
	};
	const char lightRed[lightHeight][lightWidth] = {
		"********************",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *  RED  *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"********************"
	};
	const char lightYellow[lightHeight][lightWidth] = {
		"********************",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *Yellow *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"********************"
	};
	const char lightGreen[lightHeight][lightWidth] = {
		"********************",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    *       *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"*        *         *",
		"*      *   *       *",
		"*    * GREEN *     *",
		"*      *   *       *",
		"*        *         *",
		"*                  *",
		"********************"
	};


	
public:
	void drawEmpty() const;
	void drawRed() const;
	void blinkYellow();
	void drawYellow() const;
	void drawGreen() const;
	

};

#endif
