#include "sort.h"
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>
#include <stdio.h> 
#include<string.h>
Sort::Sort(int number_of_elements, int max_element, int min_element) //1
{
	this->Nr_elements = number_of_elements;
	this->max_value = max_element;
	this->min_value = min_element;
	this->vector = (int*) malloc(this->Nr_elements * sizeof(int));
	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < Nr_elements; i++)
	{
		vector[i] = min_value + rand() % (max_value - min_value + 1);
	}
}
//Class::Class() : vector(new int[10] {1, 2, 3, 4, 5}) {this->numberOfElements = count};


Sort::Sort(int* vector, int number_of_elements) //3
{
	this->Nr_elements = number_of_elements;
	this->vector = (int*)malloc(this->Nr_elements * sizeof(int));

}
Sort::Sort(int count, ...) //4
{
	this->Nr_elements = count;
	this->vector = (int*)malloc(this->Nr_elements * sizeof(int));
	va_list v1;
	va_start(v1, count);
	for (int i = 0; i < count; i++)
	{
		vector[i] = va_arg(v1, int);
	}
	va_end(v1);
}
Sort::Sort(char* c)
{
	char* p, *s;
	int val = 0, j = 0;
	this->vector = (int*)malloc(this->Nr_elements * sizeof(int));
	p = strtok_s(c, ",",&s);
	while (p != NULL)
	{
		for (int i = 0; i < strlen(p); i++)
		{
			val = val * 10 + p[i] - '0';
		}
		vector[j] = val;
		j++;
		p = strtok_s(NULL, ",", &s);
	}
}
