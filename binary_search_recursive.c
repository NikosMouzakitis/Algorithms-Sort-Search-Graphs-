#include <stdio.h>
#include <stdlib.h>

#define N 16

// Recursive Binary search example.

int bs(int pin[],int low,int high,int val)
{
	int mid;

	if (low <= high) {
	
		mid = (low+high)/2;

		if (pin[mid] == val)
			return mid;
		else if (pin[mid] > val) 
			return bs(pin,low,mid-1,val);
		else
			return bs(pin,mid+1,high,val);
	}

	return (-1); /* not found */	
}

int main(void)
{

	int i, rv, val;
	int pin[16] = { 1, 1, 3, 3, 4, 5, 7, 7, 8, 9, 10, 10, 12, 12, 13, 14};

	for (i = 0; i < N; i++)
		printf("%d ",pin[i]);
	
	printf("\nEnter value to search:\n");
	scanf("%d",&val);

	rv = bs(pin,0,N,val);
		
	if (rv != -1)
		printf("found at : %d\n",rv);
	else
		printf("Element not found\n");


	return (0);
}
