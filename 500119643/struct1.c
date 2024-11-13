#include<stdio.h>
struct Person
{
char name[50];
int salary;
float age;
};

int main()
{
struct Person P1={"ani",300000,19};
printf("%s %d %f",P1.name,P1.salary,P1.age);
}

