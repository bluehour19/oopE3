#include "Seat.h"
void Seat::setFuelCapacity()
{
	this->fuel_capacity = 140;
}
void Seat::setFuelConsumption()
{
	this->fuel_consumption = 3;
}
void Seat::setAverageSpeed()
{
	this->average_speed_rain = 60;
	this->average_speed_sunny = 100;
	this->average_speed_snow = 70;
}
const char* Seat::GetCarName()
{
	return "Seat";
}
float Seat::getFuelCapacity()
{
	return this->fuel_capacity;
}
float Seat::getFuelConsumption()
{
	return this->fuel_consumption;
}
float Seat::getAverageSpeed(Weather weather)
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
