#include "student.h"
student::student()
{
	this->StudentName = new char[40];
}
void student::setName(char* StudentName)
{
	this->StudentName = StudentName;
}
void student::setMgrade(float Mgrade)
{
	this->Mgrade = Mgrade;
}
void student::setEgrade(float Egrade)
{
	this->Egrade = Egrade;
}
void student::setHgrade(float Hgrade)
{
	this->Hgrade = Hgrade;
}
float student::getMgrade()
{
	return this->Mgrade;
}
float student::getEgrade()
{
	return this->Egrade;
}
float student::getHgrade()
{
	return this->Hgrade;
}
float student::getAvgGrade()
{
	return (Mgrade + Egrade + Hgrade) / 3;
}
char* student::getName()
{
	return this->StudentName;
 }