#include<stdio.h>
main()
{
	int r;
	float p;
	printf("\nEnter radius of circle: ");
	scanf("%d",&r);
	
	p =   (3.14 * r * r)/2;
	printf("\n Area of a semi Circle: %.2f",p);
	
}
