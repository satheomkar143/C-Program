#include<stdio.h>
main()
{
	int a, b, c;
	printf("\nEnter 1st angle: ");
	scanf("%d",&a);
	printf("\nEnter 2nd angle: ");
	scanf("%d",&b);
	
	c = 180 - (a + b);
	
	printf("\n3rd angle of triangle: %d",c);
	
}
