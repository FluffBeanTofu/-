#include <stdio.h>

#define MUL(a)((a)*(a))

int main()
{
	int n;
	int dot=2;//�簢�� �Ѻ��� �ִ� ���� ����
	int sum;//�簢�� ���� �� ���� ����
	
	scanf("%d", &n);

	if (n >= 1 && n <= 15) {
		for (int i = 0; i < n; i++) {
			dot = (2 * dot - 1);
			sum = MUL(dot);
		}
	}

	printf("%d", sum);

	return 0;
}