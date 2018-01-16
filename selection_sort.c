#include <stdio.h>
#include <stdlib.h>

#define N 10

// Selection sort example.

int main(void)
{
	int pin[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int i, j, tmp, min;

	for (i  = 0; i < N; i++)
		printf("%d ",pin[i]);
	
	printf("\n");

	for ( i = 0; i < N-1; i++)
	{
		min = pin[i];
		
		for (j =i+1; j < N; j++)
		{
			if (min > pin[j]) {
				min = pin[j];
				tmp = pin[j];
				pin[j] = pin[i];
				pin[i] = tmp;
			}
		}
	}	

	for ( i = 0; i < N; i++)
		printf("%d ",pin[i]);

	printf("\n");
	
	return (0);
}
