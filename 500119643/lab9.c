#include <stdio.h>
#include <string.h>

struct person {
    char phoneno[50];
    char address[50];
    float age;
};

struct employee {
    int id;
    float salary;
    char gender;
    struct person p;
};

void printperson(struct person p) {
    printf("the phone no. is %s\n", p.phoneno);
    printf("the address is %s\n", p.address);
    printf("age is %f\n", p.age);
}

void printemployee(struct employee emp) {
    printf("id no. %d\n", emp.id);
    printf("salary $ %f\n", emp.salary);
    printf("gender %c\n", emp.gender);
    printperson(emp.p);
}

void getvalue(struct employee *emp2) {
    printf("Enter id, salary, gender, phone number, address, and age: ");
    scanf("%d %f %c %s %s %f", &emp2->id, &emp2->salary, &emp2->gender, emp2->p.phoneno, emp2->p.address, &emp2->p.age);
}

void structcopy(struct employee emp,struct employee emp3)
{
	emp3=emp;
	printf("id no. %d\n", emp.id);
        printf("salary $ %f\n", emp.salary);
        printf("gender %c\n", emp.gender);
        printperson(emp.p);
}

int main() 
{
    struct employee emp;
    emp.id = 500;
    emp.salary = 1600000;
    emp.gender = 'm';

    struct person p;
    strcpy(p.phoneno, "8302386406");
    strcpy(p.address, "234");
    p.age = 19;

    emp.p = p;

    printemployee(emp);

    struct employee emp2;
    getvalue(&emp2);

    printemployee(emp2);
    struct employee emp3;

    structcopy(emp,emp3);	
    return 0;
}
