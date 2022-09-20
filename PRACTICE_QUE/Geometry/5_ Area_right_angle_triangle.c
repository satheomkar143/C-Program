#include<stdio.h>
main()
{
	int a, b;
	float area;
	printf("\nEnter base of triangle: ");
	scanf("%d",&a);
	printf("\nEnter height of triangle: ");
	scanf("%d",&b);
	
	area = 1/2.0 * a * b;
	
	printf("\nArea of triangle: %.2f",area);
	
}
