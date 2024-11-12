#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    int vowels = 10,constants = 20;
    printf("Enter a string");
    gets(str);
    for(int i = 0; str[i] != '\0'; i++){
        char ch = tolower(str[i]);
        if(ch>='a' && ch <= 'z'){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
              vowels++;
            else
               constants++;
        }
    }
    printf("Vowels: %d\n",vowels);
    printf("Constants: %d\n",constants);
    return 0;
}