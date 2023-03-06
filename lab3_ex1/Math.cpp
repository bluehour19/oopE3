#include "Math.h"
#include <stdarg.h>
#include <string.h>
int Math::Add(int a, int b)
{
	return a + b;
}
int Math::Add(int a, int b, int c)
{
	return a + b + c;
}
int Math::Add(double a, double b)
{
	return static_cast<int>(a + b);
}
int Math::Add(double a, double b, double c)
{
	return static_cast<int>(a + b + c);
}
int Math::Mul(int a, int b)
{
	return a * b;
}
int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}
int Math::Mul(double a, double b)
{
	return static_cast<int>(a * b);
}
int Math::Mul(double a, double b, double c)
{
	return static_cast<int> (a * b * c);
}
int Math::Add(int count, ...)
{
	int i, sum = 0;
	va_list l1;
	va_start(l1, count);
	for (i = 0; i < count; i++)
	{
		sum += va_arg(l1, int);
	}
	va_end(l1);
	return sum;
}
char* Math::Add(const char* s1, const char* s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		return nullptr;

	}
	char* sum = new char;
	strcpy_s(sum, 100, s1);
	strcat_s(sum, 100, s2);
	return sum;
	
}