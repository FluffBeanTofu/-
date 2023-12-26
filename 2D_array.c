#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	int i, j;
	int** matrix1;
	int** matrix2;

	scanf("%d %d", &a, &b);

	matrix1 = (int**)malloc(a * sizeof(int*));
	matrix2 = (int**)malloc(a * sizeof(int*));
	for (i = 0; i < a; i++) {
		matrix1[i] = (int*)malloc(b * sizeof(int));
		matrix2[i] = (int*)malloc(b * sizeof(int));
	}

	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			scanf("%d", &matrix1[i][j]);
		}
	}

	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			scanf("%d", &matrix2[i][j]);
		}
	}

	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			printf("%d ", matrix1[i][j] + matrix2[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < a; i++) {
		free(matrix1[i]);
		free(matrix2[i]);
	}
	free(matrix1);
	free(matrix2);

	return 0;
}
