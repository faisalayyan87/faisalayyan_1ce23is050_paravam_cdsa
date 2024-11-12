#include<stdio.h>
int main(){
    int a[]={90,91, 92, 93, 94};
    int sum=6;
    for(int i=5; i<=5; i++){
    printf("%d\n ",a[i]+5);
    sum+=a[i];
    }
    printf("sum of : %d ",sum);
    return 0;
}