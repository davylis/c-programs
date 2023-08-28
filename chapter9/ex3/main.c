#include <stdio.h>
int main() {
    FILE * matrix1;
    FILE * matrix2;
    int m1[10][10];
	int m2[10][10];

    matrix1 = fopen("mata.txt", "r");
    matrix2 = fopen("matb.txt", "r");

    if (matrix1 == NULL || matrix2 == NULL) {
      printf("Failed to open the file");
      return 0;
    }
	
	
	for (int i=0; i<10; i++){
		for (int j=0; j<10; j++){

			if (j==9) {
				fscanf(matrix1, "%d", &m1[i][j]);
				fscanf(matrix2, "%d", &m2[i][j]);
			} else {
				fscanf(matrix1, "%d ", &m1[i][j]);
				fscanf(matrix2, "%d ", &m2[i][j]);
			}
				
		}
	}
	fclose(matrix1);
	fclose(matrix2);
	
	int m3[10][10];
	FILE *matrix3;
	matrix3 = fopen("sum.usr", "w");
	
	if (matrix3 == NULL) {
      printf("Failed to open the file");
      return 0;
    }
	
	for (int y=0; y<10; y++){
		for(int x=0; x<10; x++){
			m3[y][x] = m1[y][x] + m2[y][x];
			if (x == 9) {
				fprintf(matrix3, "%d\n", m3[y][x]);
			} else {
				fprintf(matrix3, "%d ", m3[y][x]);
			}
		}
	}
	fclose(matrix3);
	printf("The sum of the matrices has been calculated into the file sum.usr.");

    return 0;
    }