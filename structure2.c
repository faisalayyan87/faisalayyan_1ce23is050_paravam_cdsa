#include <stdio.h>
#include <string.h>
int main()
{
    struct person
    {
        int age;
        char name[20];
        float marks;
    };
    struct person p1; 
    printf("Enter the user name");
    fgets(p1.name,sizeof(p1.name),stdin);
    p1.name[strspn(p1.name,"\n")]=0;
    printf("Enter the marks ");
    scanf("%f",&p1.marks);
    printf("Enter the age");
    scanf("%d",&p1.age);
    printf("age is %d\n", p1.age);
    printf("name is %s\n", p1.name);
    printf("marks is %.2f", p1.marks);
    return 0;
}