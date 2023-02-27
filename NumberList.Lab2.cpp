#include "NumberList.h"
#include "NumberList.h"
#include <string.h>
#include <cmath>
#include <stdio.h>
void NumberList::Init()
{
	this->count = 0;
}
bool NumberList::Add(int x)
{
	if (count > 10)
	{
		return false;
	}
	numbers[count++] = x;
	return true;
}
void NumberList::Sort()
{
	int aux = 0;
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (numbers[j] < numbers[i])
			{
				aux = numbers[j];
				numbers[j] = numbers[i];
				numbers[i] = aux;
			}
		}
	}
}
void NumberList::Print()
{
	for (int i = 0; i < count; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
}