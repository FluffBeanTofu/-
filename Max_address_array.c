#include <stdio.h>

int main()
{
	int max = -1;// 배열에 0이 포함될 수도 있으므로 -1로 사용
	int address_x, address_y;
	int array[9][9];//이게 (0~8) x (0~8)임 

	for (int i = 0; i <= 8; i++) {
		for (int j = 0; j <= 8; j++) {
			scanf("%d", &array[i][j]);
			if (max < array[i][j]) {
				max = array[i][j];
				address_x = i+1;
				address_y = j+1;
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d\n", address_x, address_y);

	return 0;
}