#include <stdio.h>

int main()
{
	int max = -1;// �迭�� 0�� ���Ե� ���� �����Ƿ� -1�� ���
	int address_x, address_y;
	int array[9][9];//�̰� (0~8) x (0~8)�� 

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