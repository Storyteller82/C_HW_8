#include "stdio.h"
#include <inttypes.h>	

#define size_of_arr 10

#define first_elem_of_arr 0

int ELEM (int arr[], int size_arr)       // в задаче не оговорено, что нельзя портить введенный массив... 
{
	int max = arr[first_elem_of_arr];
	int min = arr[first_elem_of_arr];
	int elem_max = 0;
	int elem_min = 0;
	int tmp = 0;
	
	for (int i = first_elem_of_arr; i < size_arr; i++) 
	{
		if (max < arr[i])
		{
			max = arr[i];
			elem_max = i;			
		}
		if (min > arr[i])
		{
			min = arr[i];
			elem_min = i;			
		}
	}
	tmp = max; 
	arr[elem_max] = arr[elem_min]; // тупо подменяем самый большой элемент самым маленьким
	return tmp;
}
		
int main(int argc, char *argv[]) 
{    
	int arr[size_of_arr];
	
	int sum = 0;
	int max1 = 0;
	int max2 = 0;
	
	for (int i = first_elem_of_arr; i < size_of_arr; i++) // вводим массив
	{
		scanf ("%d", &arr[i]);
	}
	
	max1 = ELEM(arr, size_of_arr);
	max2 = ELEM(arr, size_of_arr);
	
	sum = max1 + max2;
	
	printf("%d\n", sum);
	
	return 0;
}
