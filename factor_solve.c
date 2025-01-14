#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, k;
	int* factors;//약수 저장하기 위함
	scanf("%d %d", &n, &k);

	int count = 0;
	for (int l = 1; l <= n; l++) {
		if (n % l == 0)
			count++;
	}
	factors = (int*)malloc(sizeof(int) * count);
	int j = 0;
	if (n >= 1 && n <= 10000 & k >= 1 && k <= n) {
		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				factors[j] = i;
				j++;
			}
		}
	}
	
	if (count < k) {
		printf("%d", 0);
	}
	if (count >= k) {
		printf("%d", factors[k-1]);
	}
	
	free(factors);

	return 0;
}