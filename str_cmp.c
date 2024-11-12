#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="Hello";
    char c[70]="ravi!";
    char b[50];

    strcpy(b,a);
    printf("copied string is %s\n",b);
    printf("length of cpr str is %d\n",strlen(b));
    strcat(a,b);
    printf("concatinated str1 %s\n",a);
    strcat(b,c);
    printf("cocatinated str2 %s\n",b);

    int res=strcmp(a,b);
    printf("%d\n",res);
    if(res==0){
        printf("Both strings are equal");
    }
    else if(res==-1){
        printf("string1 lesser than str2\n");
    }
    else{
        printf("string1 is greater than str2\n");
    }
    printf("%s\n",strrev(a));

    for(int i=0; a[i]!='\0'; i++){
      a[i]=toupper(a[i]);
    }
    printf("%s\n",a);
    return 0;
    }