#include<stdio.h>
#include <string.h>
struct person
{
	int phoneno;
	char address[50];
	float age;
};

struct employee
{
	int id;
	float salary;
	char gender;
	struct person p;
};

void printemployee(struct employee emp) 
	{
		printf("%d\n",emp.id);
		printf("%f\n",emp.salary);
		printf("%c\n",emp.gender);
		printf("%d\n",emp.p.phoneno);
                printf("%s\n",emp.p.address);
                printf("%f\n",emp.p.age);
	}
int main()
{
struct employee emp={21,300000,"male",912173314,"stanza",19};
printemployee(emp);
}
