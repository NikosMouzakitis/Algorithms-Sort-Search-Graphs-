#include <stdio.h>
#include <stdlib.h>

#define N 10

// Bubble sort example.

int main(void)
{
	int pin[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int i,j,tmp;

	for (i  = 0; i < N; i++)
		printf("%d ",pin[i]);
	
	printf("\n");

	for (i = 1; i < N; i++)
		for (j = 0; j < N-i; j++)	
			if (pin[j] > pin[j+1]) {
				tmp = pin[j];
				pin[j] = pin[j+1];
				pin[j+1] = tmp;
			}

	for ( i = 0; i < N; i++)
		printf("%d ",pin[i]);

	printf("\n");
	
	return (0);
}
