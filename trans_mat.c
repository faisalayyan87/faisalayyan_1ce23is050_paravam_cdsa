#include <stdio.h>
int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int transpose[3][3];
    // copying elements from a matrix & finding the transpose
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = a[i][j]; // j=icol=row-> i=j=>row=col
        }
    }
    // printing the transpose of the matrix
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", transpose[j][i]);
        }
        printf("\n");
    }
    return 0;
}
