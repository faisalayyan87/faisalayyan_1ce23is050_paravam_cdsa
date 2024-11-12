#include <stdio.h>

int main(){
      //Implicit
     int a=10;
     float b=a;
     printf("%.4f\n",b);//10.00

     //Explicit
     float c=10.5;
     int d=(int)c;
     printf("%d",d);//10
}