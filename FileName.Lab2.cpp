#include "NumberList.h"
#include <string.h>
#include <cmath>
#include <stdio.h>
int main()
{
	NumberList List;
	List.Init();
	List.Add(2);
	List.Add(5);
	List.Add(7);
	List.Add(1);
	List.Add(2);
	List.Print();
	List.Sort();
	List.Print();
	return 0;
}