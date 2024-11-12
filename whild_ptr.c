#include<stdio.h>
int main(){
    int* ptr;
    int num=100;
    int *a;
    a=&num;
    printf("%u\n",a);
    printf("%u\n",ptr);
    printf("%d",*a);
}