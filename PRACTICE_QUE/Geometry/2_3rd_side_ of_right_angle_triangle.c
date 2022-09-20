#include<stdio.h>
main()
{
	int a, b;
	float c;
	printf("\nEnter 1st side: ");
	scanf("%d",&a);
	printf("\nEnter 2nd side: ");
	scanf("%d",&b);
	
	c = a*a + b*b;
	c = sqrt(c);
	
	printf("\n3rd side of right triangle: %.2f",c);
	
}
