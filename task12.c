#include "stdio.h"
#include <inttypes.h>	

#define size_of_arr 10
#define first_elem_of_arr 0

void SORT_2 (int arr[], int size_arr)      
{
	int temp;
		
	for (int i = (size_arr / 2 - 1); i >= first_elem_of_arr; i--)  // сортировка по возраст. 
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for (int i = size_arr - 1; i >= size_arr / 2; i--)  // сортировка по убыв. 
	{
		for (int j = (size_arr / 2); j < (size_arr - 1); j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void PRINT_ARR (int arr[], int size_arr)
{
	for (int i = first_elem_of_arr; i < size_arr; i++) 
	{
		printf("%d ", arr[i]);
	}
}
		
int main(int argc, char *argv[]) 
{    
	int arr[size_of_arr];
	
	for (int i = first_elem_of_arr; i < size_of_arr; i++) // вводим массив
	{
		scanf ("%d", &arr[i]);
	}
	
	SORT_2 (arr, size_of_arr);

	PRINT_ARR (arr, size_of_arr);
	
	return 0;
}
