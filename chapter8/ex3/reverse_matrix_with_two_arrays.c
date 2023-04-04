#include <stdio.h>

int main()
{
    int matrix1[2][2]= {1, 2,
                        3, 4 };

    int matrix2[2][2];

    int x=0, y;
    int a=0, b;

    for (int y=4; y>=0; y--)
    {
        for (int a=4; a>=0; a--)
        {
        matrix2[x][a] = matrix1[y][b];
        x++;
        a++;
        }
    }

    for (int i=0; i<=4; i++)
    {
        for (int j=0; j<=4; j++)
        {
        printf("%d %d\n", matrix2[i][j], matrix1[i][j]);
        }
    }

return 0;

}