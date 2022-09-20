#include<stdio.h>
main()
{
	int r;
	float volume;
	printf("\nEnter radius of sphere: ");
	scanf("%d",&r);
	
	volume = 4/3 * 3.14 * r * r * r;
	printf("\nVolume of a Sphere : %.2f",volume); 
}
