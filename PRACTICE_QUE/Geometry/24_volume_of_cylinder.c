#include<stdio.h>
main()
{
	int r, h;
	float volume;
	printf("\nEnter radius and height of cylinder: ");
	scanf("%d%d",&r,&h);
	
	volume = 3.14 * r * r * h;
	printf("\nvolume of a cylinder : %.2f",volume); 
}
