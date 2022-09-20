#include<stdio.h>
main()
{
	int a,b;
	float p;
	printf("\nEnter major axis of ellipse: ");
	scanf("%d",&a);
	printf("\nEnter minor axis of ellipse: ");
	scanf("%d",&b);
	
	p =   2 * 3.14 * sqrt( ((a*a) + (b*b)) /2);
	printf("\nCircumference of an Ellipse: %.2f",p);
	
}
