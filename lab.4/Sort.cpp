#include "sort.h"
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>
#include <iostream>
#include<string.h>
#include <algorithm>
using namespace std;
Sort::Sort(int number_of_elements, int max_element, int min_element) //1
{
	this->Nr_elements = number_of_elements;
	this->vector = (int*)malloc(Nr_elements * sizeof(int));
	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < Nr_elements; i++)
	{
		vector[i] = min_element + rand() % (max_element - min_element + 1);
	}
}
//Class::Class() : vector(new int[10] {1, 2, 3, 4, 5}) {this->numberOfElements = count};


Sort::Sort(int array[], int number_of_elements) //3
{
	this->Nr_elements = number_of_elements;
	this->vector = (int*)malloc(Nr_elements * sizeof(int));
	copy(array, array + number_of_elements, vector);
}
Sort::Sort(int count, ...) //4
{
	va_list v1;
	va_start(v1, count);
	this->Nr_elements = count;
	this->vector = (int*)malloc(Nr_elements * sizeof(int));
	
	for (int i = 0; i < Nr_elements; i++)
	{
		vector[i] = va_arg(v1, int);
	}
	va_end(v1);
}
Sort::Sort(char* c) //5
{
	char* p, * s;
	int val = 0, j = 0, nr = 1, k = 0;
	while (c[k] != NULL)
	{
		if (c[k] == ',') nr++;
		k++;
	}
	this->Nr_elements = nr;
	this->vector = (int*)malloc(Nr_elements * sizeof(int));
	p = strtok_s(c, ",",&s);
	while (p != NULL)
	{
		for (int i = 0; i < strlen(p); i++)
		{
			val = val * 10 + p[i] - '0';
		}
		vector[j] = val;
		val = 0;
		j++;
		p = strtok_s(NULL, ",", &s);
	}
}
int Sort::Partition(int low, int high, bool ascendent)
{
	int pivot = vector[high];
	int i = low - 1;
	for (int j = low; j <= high; j++)
	{
		if ((ascendent && vector[j] < pivot) || (!ascendent && vector[j] > pivot))
		{
			i++;
			swap(vector[i], vector[j]);
		}
	}
	swap(vector[i + 1], vector[high]);
	return (i + 1);
}
void Sort::quick(int low, int high, bool ascendent)
{
	if ( low < high) 
	{
		int p = Partition(low, high, ascendent);
		quick(low, p - 1, ascendent);
		quick(p + 1, high, ascendent);
	}
}
void Sort::InsertSort(bool ascendent)
{
	int j;
	for (int i = 1; i < Nr_elements; i++)
	{
		j = i ;
		while (j > 0 && ((ascendent && vector[j - 1] > vector[j]) || (!ascendent && vector[j - 1] < vector[j])))
		{
			swap(vector[j - 1], vector[j]);
			j--;
		}
	}
}
void Sort::QuickSort(bool ascendent)
{
	quick(0, Nr_elements - 1, ascendent);
}
void Sort::BubbleSort(bool ascendent)
{
	for (int i = 0; i < Nr_elements-1; i++)
	{
		for (int j = 0; j < Nr_elements-i-1; j++)
		{
			if ((ascendent && vector[j] > vector[j + 1]) || (!ascendent && vector[j] < vector[j + 1]))
			{
				swap(vector[j], vector[j + 1]);
			}
		}
	}
}
void Sort::Print()
{
	for (int i = 0; i < Nr_elements; i++)
	{
		cout << vector[i] << " ";
	}
	cout << "\n";
}
int Sort :: GetElementsCount()
{
	return this->Nr_elements;
}
int Sort::GetElementFromIndex(int index)
{
	if (index<0 || index>Nr_elements)
	{
		return -1;
	}
	else return vector[index];
}
