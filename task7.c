#include "stdio.h"
#include <inttypes.h>	

#define size_of_arr 10
#define first_elem_of_arr 0

void REVERS (int arr[], int size_arr)      
{
	int arr_temp[size_arr];
		
	for (int i = first_elem_of_arr; i < (size_arr / 2); i++) 
	{
		arr_temp[i] = arr[(size_arr / 2) - i - 1]; // переворачиваем первую половину
	}
	for (int i = (size_arr / 2); i < size_arr; i++) 
	{
		arr_temp[i] = arr[size_arr - i + 4];       // переворачиваем вторую половину
	}
	for (int i = first_elem_of_arr; i < size_arr; i++) 
	{
		arr[i] = arr_temp[i];					   // копируем временыый массив в рабочий
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
	
	REVERS (arr, size_of_arr);

	PRINT_ARR (arr, size_of_arr);
	
	return 0;
}

