#include<stdio.h>
int main(){
    int a;
    float x;
    char c;
    printf("Enter value of a\n");
    scanf("%d",&a);//location a =10
    printf("Enter value of x\n");
    scanf("%f",&x);//location x =10.0
    getchar();
    printf("Enter value of c\n");
    scanf("%c",&c);//loaction c ='a'12
    printf("Value of a is:%d\t\n",a);
    printf("Value of x is:%f\t\n",x);
    printf("%c",c);
    return 0;
    
}