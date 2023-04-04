#include <stdio.h>

#define SIZE_X 3
#define SIZE_Y 2

int main()
{
    int matrix1[2][3]= {{1, 2, 3},
                        {3, 4, 7 }
                        };

    int matrix2[2][3];

    int x=0, y;
    int a=0, b;

    for (int y=1; y>=0; y--)
    {
        for (int b=2; b>=0; b--)
        {
        matrix2[x][a] = matrix1[y][b];
        a++;
        }
      a = 0;  
      x++;
    }

    for (int i=0; i < 2; i++)
    {
        for (int j=0; j < 3; j++)
        {
        printf("%d %d\n", matrix2[i][j], matrix1[i][j]);
        }
    }

return 0;

}