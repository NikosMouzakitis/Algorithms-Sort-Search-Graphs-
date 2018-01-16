#include <stdio.h>
#include <stdlib.h>

#define N 10

// Insertion sort example.

int main(void)
{
	int pin[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int i, j, tmp, min;

	for (i  = 0; i < N; i++)
		printf("%d ",pin[i]);
	
	printf("\n");

	for (i = 1; i < N; i++)
	{
		tmp = pin[i];
		j = i-1;
		
		while ( (j >= 0) && (pin[j] > tmp) ) {
			pin[j+1] = pin[j];
			j--;
		}
		
		pin[j+1] = tmp;
	}

	for ( i = 0; i < N; i++)
		printf("%d ",pin[i]);

	printf("\n");
	
	return (0);
}
