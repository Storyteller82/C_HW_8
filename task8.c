#include "stdio.h"
#include <inttypes.h>	

#define size_of_arr 12
#define first_elem_of_arr 0

void REVERS_3 (int arr[], int size_arr)      
{
	int arr_temp[size_arr];
		
	for (int i = first_elem_of_arr; i < (size_arr / 3); i++) 
	{
		arr_temp[i] = arr[(size_arr / 3) - i - 1]; // переворачиваем первую треть
	}
	for (int i = (size_arr / 3 ); i < ((size_arr / 3) * 2); i++) 
	{
		arr_temp[i] = arr[((size_arr / 3) * 2) - i + 3];       // переворачиваем вторую треть
	}
	for (int i = ((size_arr / 3) * 2); i < size_arr; i++) 
	{
		arr_temp[i] = arr[size_arr - i + 7];       // переворачиваем третью треть 0_о
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
	
	REVERS_3 (arr, size_of_arr);

	PRINT_ARR (arr, size_of_arr);
	
	return 0;
}

