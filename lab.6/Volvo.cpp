#include "Volvo.h"
void Volvo::setFuelCapacity()
{
	this->fuel_capacity = 200;
}
void Volvo::setFuelConsumption()
{
	this->fuel_consumption = 4;
}
const char* Volvo::GetCarName()
{
	return "Volvo";
}
void Volvo::setAverageSpeed()
{
	this->average_speed_rain = 80;
	this->average_speed_sunny = 150;
	this->average_speed_snow = 100;
}
float Volvo::getFuelCapacity()
{
	return this->fuel_capacity;
}
float Volvo::getFuelConsumption()
{
	return this->fuel_consumption;
}
float Volvo::getAverageSpeed(Weather weather)
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