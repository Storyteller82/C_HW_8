#include "stdio.h"
#include <inttypes.h>	
		
int main(int argc, char *argv[])
{    
	int arr[5];
	int min = 0;
	
	for (int i =0; i < 5; i++) 
	{
		scanf ("%d", &arr[i]);
	}
	
	min = arr[0];
	
	for (int i =1; i < 5; i++) 
	{
		if (min > arr[i])
		min = arr[i];
	}
	
	printf("%d\n", min);
	
	return 0;
}
