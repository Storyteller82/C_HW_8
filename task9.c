#include "stdio.h"
#include <inttypes.h>	

#define size_of_arr 12
#define first_elem_of_arr 0

void SDVIG_R4 (int arr[], int size_arr)      
{
	int tmp[4];
	
	for (int i = size_arr - 4; i < size_arr; i++) // сначала сохраним четыре правых во временный массив
	{
		tmp[i - 8] = arr[i];
	}
	for (int k = 0; k < 4; k++) // сдвигаем массив четыре раза вправо (на 4 элемента)
	{	
		for (int i = size_arr - 1; i >= first_elem_of_arr; i--) 
		{
			arr[i] = arr[i - 1]; 
		}
	}
	for (int i = 0; i < 4; i++) // возвращаем сохраненные последние элементы в начало
	{
		arr[i] = tmp[i];
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
	
	SDVIG_R4 (arr, size_of_arr);

	PRINT_ARR (arr, size_of_arr);
	
	return 0;
}

