#include "stdio.h"
#include <inttypes.h>	
		
int main(int argc, char *argv[])
{    
	int arr[5];
	int sum = 0;
	float srednee = 0;
	
	for (int i =0; i < 5; i++) 
	{
		scanf ("%d", &arr[i]);
	}
	
	for (int i =0; i < 5; i++) 
	{
		sum = sum + arr[i];
	}
	
	srednee = (float)sum / 5;
	
	printf("%.3f\n", srednee);
	
	return 0;
}
