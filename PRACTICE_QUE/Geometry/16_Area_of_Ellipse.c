#include<stdio.h>
main()
{
	int a,b;
	float p;
	printf("\nEnter major axis of ellipse: ");
	scanf("%d",&a);
	printf("\nEnter minor axis of ellipse: ");
	scanf("%d",&b);
	
	p =   3.14 * a * b;
	printf("\nArea of an Ellipse: %.2f",p);
	
}
