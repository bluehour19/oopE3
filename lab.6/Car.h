#pragma once
#include <stdio.h>
#include "Weather.h"
class Car
{
protected: 
	float fuel_capacity;
	float fuel_consumption;
	float average_speed_rain;
	float average_speed_sunny;
	float average_speed_snow;
public:
	virtual void setFuelCapacity();
	virtual void setFuelConsumption();
	virtual void setAverageSpeed();
	virtual const char* GetCarName();
	virtual float getFuelCapacity();
	virtual float getFuelConsumption();
	virtual float getAverageSpeed(Weather weather);
};

