#include <iostream>
#include <cstring>
#include "student.h"

int main()
{
	char p[100],  q[100];
	strcpy_s(p, sizeof p, "Clark");
	strcpy_s(q, sizeof q, "Grey");
	student Student1;
	student Student2;
	Student1.setMgrade(8);
	Student1.setEgrade(9);
	Student1.setHgrade(7);
	Student2.setMgrade(10);
	Student2.setEgrade(7);
	Student2.setHgrade(8);
	Student1.setName(p);
	Student2.setName(q);
	return 0;
}