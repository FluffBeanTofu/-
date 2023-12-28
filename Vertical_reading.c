#include <stdio.h>

int main()
{
	char array2[5][15] = { 0 };
	char array1[75] = { 0 };

	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 14; j++) {
			scanf("%c", &array2[i][j]);
			if (array2[i][j] == '\n') {
				array2[i][j] = '\0';
				break;
			}
		}
	}

	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 14; j++) {
				array1[i * 15 + j] = array2[i][j];
		}
	}

	for (int i = 0; i <= 74; i++) {
		if (array1[i] != '\0'&&array1[i]!=' ') {
			printf("%c", array1[i]);
		}
	}
	
	return 0;
}