#include<stdio.h>
main()
{
	int r1, r2;
	float p;
	printf("\nEnter outer radius of ring: ");
	scanf("%d",&r1);
	printf("\nEnter inner radius of ring: ");
	scanf("%d",&r2);
	
	p =   3.14 *( (r1*r1) - (r2*r2));
	printf("\n Area of a ring: %.2f",p);
	
}
