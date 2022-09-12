#include<stdio.h>
main()
{
	int r, h;
	float volume, pi=3.14;
	
	printf("enter the value of r= ");
	scanf("%d",&r);
	printf("enter the value of h= ");
	scanf("%d",&h);
	
	volume = pi*r*r*h/3;
	printf("\n volume of cone= %f",volume);
}
