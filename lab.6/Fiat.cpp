#include "Fiat.h"
void Fiat::setFuelCapacity()
{
	this->fuel_capacity = 110;
}
void Fiat::setFuelConsumption()
{
	this->fuel_consumption = 2;
}
void Fiat::setAverageSpeed()
{
	this->average_speed_rain = 80;
	this->average_speed_sunny = 120;
	this->average_speed_snow = 70;
}
const char* Fiat::GetCarName()
{
	return "Fiat";
}
float Fiat::getFuelCapacity()
{
	return this->fuel_capacity;
}
float Fiat::getFuelConsumption()
{
	return this->fuel_consumption;
}
float Fiat::getAverageSpeed(Weather weather)
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