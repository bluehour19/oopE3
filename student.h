#pragma once
#include<string.h>
class student
{
	char* StudentName;
	float Mgrade, Egrade, Hgrade;
public:
	student();
	void setMgrade(float Mgrade);
	void setEgrade(float Egrade);
	void setHgrade(float Hgrade);
	void setName(char* StudentName);
	float getMgrade();
	float getEgrade();
	float getHgrade();
	float getAvgGrade();
	char* getName();
};

