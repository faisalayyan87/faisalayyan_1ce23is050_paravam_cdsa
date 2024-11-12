#include <stdio.h>
int main()
{
    int arr[2][2] = {{1, 2}, {4, 5}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (i == j)
                printf("%d ", arr[i][j]);
        }
    }
    return 0;
}