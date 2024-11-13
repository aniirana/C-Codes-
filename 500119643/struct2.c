#include<stdio.h>
struct students
{
int rollno;
char name[20];
char department[50];
char course[10];
int year_of_joining;
};
void printstudents(struct students S1)
{
printf("%d\n",S1.rollno);
printf("%s\n",S1.name);
printf("%s\n",S1.department);
printf("%s\n",S1.course);
printf("%d",S1.year_of_joining);
} 
int main()
{
struct students S1={51,"ani","science","B.tech",2023};
printstudents(S1);
}


