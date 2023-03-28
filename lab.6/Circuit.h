#pragma once
#include "Car.h"

class Circuit : public Car
{

	Car** car_type;
	int finish[100];
	float circuit_lenght;
	int nrcars;
	int current_car;
	Weather condition;

public:
	Circuit();
	void SetLenght(float lenght);
	void SetWeather(Weather weather);
	void AddCar(Car* car);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};


