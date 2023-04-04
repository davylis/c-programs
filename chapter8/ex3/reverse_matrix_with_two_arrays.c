#include <stdio.h>

int main()
{
    int matrix1[][]= {};

    int matrix2[][];

    int x=0, y;

    for (int y=2; y>=0; y--)
    {
        matrix2[x] = matrix1[y];
        x++;
    }

    for (int i=0; i<=2; i++)
    {
        printf("%d %d\n", matrix2[i], matrix1[i]);
    }

return 0;

}