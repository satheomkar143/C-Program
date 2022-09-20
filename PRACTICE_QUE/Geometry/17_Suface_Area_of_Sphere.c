#include<stdio.h>
main()
{
	int r;
	float area;
	printf("\nEnter radius of sphere: ");
	scanf("%d",&r);
	
	area = 4 * 3.14 * r * r;
	printf("\nSuface Area of a Sphere : %.2f",area); 
}
