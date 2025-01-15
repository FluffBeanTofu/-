/*น้มุ 2798น๘*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, n;
	int* card;
	int mid=10000000;
	int result = 0;

	scanf("%d %d", &m, &n);
	card = (int*)malloc(sizeof(int) * m);
	
	for (int k = 0; k < m; k++) {
		scanf("%d", &card[k]);
	}

	for (int i = 0; i < m; i++) {
		for (int j = i + 1; j < m; j++) {
			for (int k = j + 1; k < m; k++) {
				if ((card[i] + card[j] + card[k]) <= n) {
					if (n - (card[i] + card[j] + card[k]) < mid) {
						result = card[i] + card[j] + card[k];
						mid = n - result;
					}
				}
			}
		}
	}
	
	printf("%d", result);
	free(card);
	return 0;
}