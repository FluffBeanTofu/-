#include <stdio.h>

#define MUL(a)((a)*(a))

int main()
{
	int n;
	int dot=2;//사각형 한변에 있는 점의 갯수
	int sum;//사각형 위의 총 점의 갯수
	
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