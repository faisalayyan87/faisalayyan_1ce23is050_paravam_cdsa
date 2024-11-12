#include<stdio.h>
#include<string.h>
int main(){
     char str[] = "hyh";
     int start=0;
     int end = strlen(str)-1;
     char temp;
     char b[20];
     strcpy(b,str);

     while(start < end){
        temp=str[start];
        str[start]= str[end];
        str[end]= temp ;
        start++;
        end--;
     }
     printf("reversed string:%s\n",str);
     if(strcmp(b,str)==0){
        printf("Palindrome");
     }
    else{
        printf("Not Palindrome");
     }
    return 0;
}