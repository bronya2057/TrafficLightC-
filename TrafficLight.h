#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H
#include <iostream>
#include <ctime>

class TrafficLight
{
	
	int timeElapsedPause;			//TO SOLVE PROBLEM WITH TIME after PAUSE
	

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
	enum state { RED, YELLOW, GREEN };
	void drawEmpty() const;
	void drawRed() const;
	void blinkYellow();
	void drawYellow() const;
	void drawGreen() const;




};

#endif
