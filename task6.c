// очень лень было править первую задачу к формату третей, четвертой... оставил так. 

#include "stdio.h"
#include <inttypes.h>	
		
int main(int argc, char *argv[])
{    
	int arr[12];
	int sum = 0;
	float srednee = 0;
	
	for (int i =0; i < 12; i++) 
	{
		scanf ("%d", &arr[i]);
	}
	
	for (int i =0; i < 12; i++) 
	{
		sum = sum + arr[i];
	}
	
	srednee = (float)sum / 12;
	
	printf("%.2f\n", srednee);
	
	return 0;
}
