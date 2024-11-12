#include <stdio.h>
struct address{
    char street[20];
    char city[20];
    char state[20];
};
    struct person{
        int age;
        char name[50];
        struct address address;
};    
int main ()  { 
    struct person person;

    printf("Enter the name : ");
    scanf("%d",person.name);
    printf("Enter the age:");
    scanf("%d",person.age);
    printf("Enter the street:");
    scanf("%s",person.address.street);
    printf("Enter the city:");
    scanf("%s",person.address.city);
    printf("Enter the state");
    scanf("%s",person.address.city);

    printf("\nName: %s\n",person.name);
    printf("Age: %d\n",person.age);
    printf("street: %s\n",person.address.street);
    printf("city: %s\n",person.address.city);
    printf("state: %s\n",person.address.state);
    
    return 0;
}
















