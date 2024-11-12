#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "level";
    int start = 0;
    int end = strlen(str) - 1;
    char pali;
    printf("The given string is: %s\n", str);
    char str_backup[] = "";
    strcpy(str_backup, str);
    printf("The copied string is: %s\n", str_backup);
    while (start < end)
    {
        pali = str[start];
        str[start] = str[end];
        str[end] = pali;
        start++;
        end--;
    }
    printf("Reversed String: %s\n", str);
    if (strcmp(str_backup, str) == 0)
    {
        printf("It is palindrome");
    }
    else
    {
        printf("It is not palindrome");
    }
    return 0;
}