#pragma once
#include "Car.h"
class BMW : public Car
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

