#include <iostream>
#include <cstring>
#include "student.h"
int compareMgrade(student Student1, student Student2)
{
	if (Student1.getMgrade() > Student2.getMgrade())
	{
		return 1;
	}
	else return -1;
	if (Student1.getMgrade() == Student2.getMgrade())
		return 0;
}
int compareEgrade(student Student1, student Student2)
{
	if (Student1.getEgrade() > Student2.getEgrade())
	{
		return 1;
	}
	else return -1;
	if (Student1.getEgrade() == Student2.getEgrade())
		return 0;
}
int compareHgrade(student Student1, student Student2)
{
	if (Student1.getHgrade() > Student2.getHgrade())
	{
		return 1;
	}
	else return -1;
	if (Student1.getHgrade() == Student2.getHgrade())
		return 0;
}
int compareAvggrade(student Student1, student Student2)
{
	if (Student1.getAvgGrade() > Student2.getAvgGrade())
	{
		return 1;
	}
	else return -1;
	if (Student1.getHgrade() == Student2.getHgrade())
		return 0;
}
int compareName(student Student1, student Student2)
{
	if (strcmp(Student1.getName(), Student2.getName()) > 0) return 1;
	else return -1;
	if (strcmp(Student1.getName(), Student2.getName()) == 0) return 0;
}
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
        printf("%d\n", compareMgrade(Student1, Student2));
	printf("%d\n", compareEgrade(Student1, Student2));
	printf("%d\n", compareHgrade(Student1, Student2));
	printf("%d\n", compareAvggrade(Student1, Student2));
	printf("%d\n", compareName(Student1, Student2));
	return 0;
}
