#include "RangeRover.h"
void RangeRover::setFuelCapacity()
{
	this->fuel_capacity = 250;
}
void RangeRover::setFuelConsumption()
{
	this->fuel_consumption = 5;
}
void RangeRover::setAverageSpeed()
{
	this->average_speed_rain = 100;
	this->average_speed_sunny = 180;
	this->average_speed_snow = 130;
}
const char* RangeRover::GetCarName()
{
	return "RangeRover";
}
float RangeRover::getFuelCapacity()
{
	return this->fuel_capacity;
}
float RangeRover::getFuelConsumption()
{
	return this->fuel_consumption;
}
float RangeRover::getAverageSpeed(Weather weather)
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