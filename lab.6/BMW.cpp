#include "BMW.h"
void BMW::setFuelCapacity()
{
	this->fuel_capacity = 200;
}
void BMW::setFuelConsumption()
{
	this->fuel_consumption = 5;
}
void BMW::setAverageSpeed()
{
	this->average_speed_rain = 100;
	this->average_speed_sunny = 200;
	this->average_speed_snow = 90;
}
const char* BMW::GetCarName()
{
	return "BMW";
}
float BMW::getFuelCapacity()
{
	return this->fuel_capacity;
}
float BMW::getFuelConsumption()
{
	return this->fuel_consumption;
}
float BMW::getAverageSpeed(Weather weather)
{
	switch (weather)
	{
	case Rain:
	{
		return this->average_speed_rain;
		break;
	}
	case Sunny:
	{
		return this->average_speed_sunny;
		break;
	}
	case Snow:
	{
		return this->average_speed_snow;
		break;
	}
	}
}