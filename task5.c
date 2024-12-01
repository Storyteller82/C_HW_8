#include "stdio.h"
#include <inttypes.h>	

#define size_of_arr 10

#define first_elem_of_arr 0

int POZ (int arr[], int size_arr)      
{
	int pozitiv = 0;
		
	for (int i = first_elem_of_arr; i < size_arr; i++) 
	{
		if (arr[i] > 0)
		{
			pozitiv = pozitiv + arr[i];
		}
	}
	
	return pozitiv;
}
		
int main(int argc, char *argv[]) 
{    
	int arr[size_of_arr];
	
	for (int i = first_elem_of_arr; i < size_of_arr; i++) // вводим массив
	{
		scanf ("%d", &arr[i]);
	}

	printf("%d\n", POZ(arr, size_of_arr));
	
	return 0;
}
