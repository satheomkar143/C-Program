#include<stdio.h>
main()
{
	int a, b, p;
	printf("\nEnter length of rectangle: ");
	scanf("%d",&a);
	printf("\nEnter width of rectangle: ");
	scanf("%d",&b);
	
	p = 2 * (a + b);
	printf("\nPerimeter of rectangle: %d",p);
	
}
