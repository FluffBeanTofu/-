#include <stdio.h>

int main()
{
	int m, n;
	int result = 0;
	int a=10002;//가장 작은 i값을 받아들이기 위해 m,n의 최대값인 10,000을 넘는 값을 설정
	int min = 10001;//가장 작은 i값을 받아들이기 위해

	scanf("%d", &m);
	scanf("%d", &n);

	int sum = 0;
	if (m <= n&&m<=10000&&n<=10000&&m>=1&&n>=1) {
		for (int i = m; i <= n; i++) {
			if (i == 1) continue;
			if (i > 2) {
				for (int j = 2; j < i; j++) {
					if (i % j == 0) {
						result = 0;
						a = 10002;
						break;
					}
					result = i;
					if (a > i) {
						a = i;
					}
				}
				if (min > a) {
					min = a;
				}
			}
			if (i == 2) {
				result = 2;
				a = 2;
			}
			sum += result;
		}
	}
	printf("%d\n", sum);
	printf("%d\n", min);
	return 0;
}