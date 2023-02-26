#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int chartoint(char s[])
{
	int value = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		value = value * 10 + (s[i] - '0');
	}
	return value;
}
int main()
{
	int sum = 0, value = 0;
	FILE* fp;
	if (fopen_s(&fp, "ini.txt", "r") != 0)
	{
		printf("Eroare. Nu am putut deschide fisierul\n");
	}
	else {
		printf("Am deschis fisierul cu success!\n");
		char myString[200];
		while (fgets(myString, 200, fp))
		{
			myString[strlen(myString) - 1] = '\0';
			value = chartoint(myString);
			sum += value;
		}
	}
	printf("%d", sum);
	printf("\n\n");
	return 0;
}
