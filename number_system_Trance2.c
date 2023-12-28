#include <stdio.h>
#include <stdlib.h>

#define DIV(a,b)((a)/(b))
#define MOD(a,b)((a)%(b))

int main()
{
	int N, B;//N은 10진법 수, B는 어떤 진법으로 진행할지 선택
	int* system;
	int count = 0;

	scanf("%d %d", &N, &B);

	int n = N;
	while (n > 0) {
		n = n / B;
		count++;//10,5,2,1,0
	}

	system = (int*)malloc(sizeof(int) * count);
	
	if (N <= 1000000000) {
		if (B >= 2 && B <= 36) {
			if (N >= B) {
				for (int i = 0; i < count-1; i++) {
					system[i] = MOD(N, B);
					N = DIV(N, B);
				}
			}
			if (N >= 0 && N < B) {
				system[count - 1] = MOD(N, B);
			}
		}
	}
	for (int i = count-1; i > -1; i--) {
		if (system[i] < 10) {
			printf("%c", system[i] + 48);
		}
		else {
			printf("%c", system[i] + 55);
		}
	}


	free(system);
	
	return 0;
}