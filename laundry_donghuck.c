#include <stdio.h>
#include <stdlib.h>

#define DIV(a,b)((a)/(b))
#define MOD(a,b)((a)%(b))
#define Q 25
#define D 10
#define N 5
#define P 1

int main()
{
	int* C;
	int T;
	int q, d, n, p;
	
	scanf("%d", &T);
	C = (int*)malloc(sizeof(int)*T);

	for (int k = 0; k < T; k++) {
		scanf("%d", &C[k]);
	}

	for (int k = 0; k < T; k++) {
		if (C[k] >= 1 && C[k] <= 500) {
			q = DIV(C[k], Q);
			d = DIV(MOD(C[k], Q), D);
			n = DIV(MOD(MOD(C[k], Q), D), N);
			p = DIV(MOD(MOD(MOD(C[k], Q), D), N), P);

			printf("%d %d %d %d\n", q, d, n, p);
		}
	}

	free(C);

	return 0;
}