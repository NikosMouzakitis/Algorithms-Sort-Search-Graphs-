#include <stdio.h>
#include <stdlib.h>

#define N 16
// merge sort example.
void merge(int pin[],int i,int mid, int j)
{
	int a, b, overa, overb, w, k, l;
	int tmp[j-i];

	a = i;
	b = mid+1;
	overa = overb = w = k = l = 0;


	while ( k <= j ) {

		if ( a > mid) {
			overa++;
			break;
		}

		if ( b > j ) {
			overb++;
			break;
		}
		if (pin[a] <= pin[b]) {
			tmp[k] = pin[a++];
			k++;
		} else {
			tmp[k] = pin[b++];
			k++;
		} 
	}
	
	if (overa) {
		while( b <= j) {
			tmp[k] = pin[b++];
			k++;
		}
	} else if(overb) {
		while(a <= mid) {
			tmp[k] = pin[a++];
			k++;
		}
	}	
	
	for( l = i; w <= j-i; w++,l++)
		pin[l] = tmp[w];
}

void mergesort(int pin[],int i,int j)
{
	int mid;

	if (i < j) {
		mid = (i + j)/2;
		
		mergesort(pin,i,mid);
		mergesort(pin,mid+1,j);

		merge(pin,i,mid,j);
	}
}

int main(void)
{

	int pin[N] = { 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int i;

	printf("Values\n");

	for ( i = 0; i < N; i++)
		printf("%d ",pin[i]);

	mergesort(pin,0,N-1);

	printf("After merge sort\n");

	for ( i = 0; i < N; i++)
		printf("%d ",pin[i]);


	return (0);
}
