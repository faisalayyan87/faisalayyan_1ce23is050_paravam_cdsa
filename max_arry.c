#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the 5 elements");
    for(int i=0; i<n; i++){
       scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
         max=arr[i];
        }
    }
    printf("The max element is %d",max);
    return 0;
}