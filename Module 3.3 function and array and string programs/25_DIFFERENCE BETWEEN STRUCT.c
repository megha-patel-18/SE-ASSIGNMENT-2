//wap to difference between struct & unoin.
#include<stdio.h>
struct employee
{
	int age; 
	char name [20];
	char department[20];
	float salary;
};
union person
{
	int age;
	char name [20];
	char department[20];
	float salary;
};
int main()
{
	struct employee emp1;
	union person person1;
	printf("\n\n\t the size of employee structure = %d",sizeof(emp1));
	printf("\n\n\t the size of person union = %d ",sizeof(person1));
}
