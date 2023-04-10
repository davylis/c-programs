#include <stdio.h>

#define SIZE_X 3
#define SIZE_Y 2

int main()
{
    int matrix1[3][3][3] = {
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

    int matrix2[3][3][3];

    int x=0, y;
    int a=0, b;
    int o=0, h;

    for (int y=1; y>=0; y--)
    {
        for (int b=2; b>=0; b--)
        {
            for(int h=3; h>=0; h--)
        
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
    for (int i=0; i < 2; i++)
    {
        for (int j=0; j < 3; j++)
        {
            for(int l=0; l < 4; l++)
            {
                printf("%d %d\n", matrix2[i][j][l], matrix1[i][j][l]);
            }
        }
    }

return 0;

}