#include <stdio.h>

int main()
{
    char array2[5][16] = { 0, };
    char array1[100] = { 0, };

    for (int i = 0; i <= 4; i++) {
        scanf("%s", array2[i]);
    }

    for (int j = 0; j <= 15; j++) {
        for (int i = 0; i <= 4; i++) {
            array1[j * 5 + i] = array2[i][j];
        }
    }

    for (int i = 0; i <= 99; i++) {
        if (array1[i] != '\0' && array1[i] != ' ') {
            printf("%c", array1[i]);
        }
    }

    return 0;
}