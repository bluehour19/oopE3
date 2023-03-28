#include "Circuit.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

Circuit::Circuit()
{
	this->nrcars = 5;
	this->current_car = 0;
	this->car_type = (Car**)(malloc(this->nrcars * sizeof(Car*)));

}
void Circuit::SetLenght(float lenght)
{
	circuit_lenght = lenght;
}void Circuit::SetWeather(Weather weather)
{
	this->condition = weather;
}
void Circuit::AddCar(Car* car)
{
	if (this->current_car < this->nrcars)
	{
		this->car_type[this->current_car++] = car;
	}
}
void Circuit::Race()
{
	for (int i = 0; i < nrcars - 1; i++)
	{
		for (int j = i + 1; j < nrcars; j++)
		{
			if (car_type[i]->getAverageSpeed(condition) < car_type[j]->getAverageSpeed(condition))
			{
			std:: swap(car_type[i], car_type[j]);
			}
		}
	}
	for (int i = 0; i < nrcars; i++)
	{
		if (car_type[i]->getFuelConsumption() * this->circuit_lenght > car_type[i]->getFuelCapacity())
		{
			finish[i] = 0;
		}
		else finish[i] = 1;
	}
}
void Circuit::ShowFinalRanks()
{
	for (int i = 0; i < nrcars; i++)
	{
		if (finish[i] == 1)
			std::cout << car_type[i]->GetCarName() << " ";
	}
	std::cout << "\n";
}
void Circuit::ShowWhoDidNotFinish()
{
	for (int i = 0; i < nrcars; i++)
	{
		if (finish[i] == 0)
			std::cout << car_type[i]->GetCarName() << " ";
	}
	std::cout << "\n";
}
