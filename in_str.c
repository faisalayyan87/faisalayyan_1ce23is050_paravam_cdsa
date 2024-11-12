#include<stdio.h>
int main(){
    char str[20];
    printf("Enter name");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    printf("The name is : %s\n",str);
    int length=strlen(str);
    printf("%d is the length of string", length);

    return 0;
} 