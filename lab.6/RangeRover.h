#pragma once
#include "Car.h"
class RangeRover : public Car
{
	
public:
	void setFuelCapacity();
	void setFuelConsumption();
	void setAverageSpeed();
	const char* GetCarName();
	float getFuelCapacity();
	float getFuelConsumption();
	float getAverageSpeed(Weather weather);
};

