#include <stdio.h>
#include <string.h>
int main()
{
    struct person
    {
        int age;
        char name[50];
        char dep[50];
        float marks;
        float USN;
    };
    struct person p1={21,"Shashank","Computer science ",99.99,39721052};
    struct person *ptr=&p1;
    printf(" Age is %d\n", p1.age);
    printf(" Name is %s\n", p1.name);
    printf(" Departement is %s\n", p1.dep);
    printf(" Marks is %.2f\n", p1.marks);
    printf(" USN is %.2f", p1.USN);
    return 0;
}
















