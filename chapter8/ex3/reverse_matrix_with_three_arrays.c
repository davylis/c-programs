#include <stdio.h>

#define SIZE 3

#if 1
int main()
{
    int matrix1[SIZE][SIZE][SIZE] = {
                        {
                            {1, 2, 3},
                            {3, 4, 6},
                            {5, 6, 9},
                                     
                        },
                        {
                            {11, 22, 33},
                            {12, 24, 36},
                            {13, 26, 39},
                        },
                        {
                            {123, 224, 345},
                            {321, 442, 543},
                            {231, 242, 453},
                        }
                    };

    int matrix2[SIZE][SIZE][SIZE];

    int x=0, y;
    int a=0, b;
    int o=0, h;

    for (int y=2; y>=0; y--)
    {
        for (int b=2; b>=0; b--)
        {
            for(int h=2; h>=0; h--)
        
            {
                matrix2[x][a][o] = matrix1[y][b][h];
                o++;
            }
            o = 0;  // what is this?
            a++; // why is this?
        }
        a=0; // comments!!!!
        x++; // !!
    }
    // comments!!!!
    for (int i=0; i < 3; i++)
    {
        for (int j=0; j < 3; j++)
        {
            for(int l=0; l < 3; l++)
            {
                printf("%d %d\n", matrix2[i][j][l], matrix1[i][j][l]);
            }
        }
    }

return 0;

}

#endif