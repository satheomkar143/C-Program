#include<stdio.h>
main()
{
	int r;
	float volume;
	printf("\nEnter radius of sphere: ");
	scanf("%d",&r);
	
	volume = (2/3.0) * 3.14 * r * r * r;
	printf("\Volume of a hemisphere : %.2f",volume); 
}
