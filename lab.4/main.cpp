#include "Sort.h"
#include <stdlib.h>
int main()
{
	//create a list with randomised values
	Sort s1(10, 100, 10);
	s1.Print();
	//create a list with existing values
	int v[5] = { 1, 2, 3, 4, 5 };
	Sort s3(v, 5);
	s3.Print();
	//create a list with a variatic number of values 
	Sort s4(6, 1, 2, 3, 4, 5, 6);
	s4.Print();
	//create a list from a char *
	char c[] = "34,12,56,78";
	Sort s5(c);
	s5.Print();
	s5.QuickSort(true);
	s5.Print();
	system("pause");
	return 0;
}
