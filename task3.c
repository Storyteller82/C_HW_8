#include "stdio.h"
#include <inttypes.h>	
		
int main(int argc, char *argv[])
{    
	int arr[10];
	int min = 0;
	int Nmin = 1;
	int max = 0;
	int Nmax = 1;
	
	for (int i =0; i < 10; i++) // вводим массив
	{
		scanf ("%d", &arr[i]);
	}
	
	min = arr[0];
	max = arr[0];
	
	for (int i =1; i < 10; i++) 
	{
		if (min > arr[i])
		{
			min = arr[i];
			Nmin = i + 1;
		}
		if (max < arr[i])
		{
			max = arr[i];
			Nmax = i + 1;
		}
	}
	
	printf("%d %d %d %d\n", Nmax, max, Nmin, min);
	
	return 0;
}
