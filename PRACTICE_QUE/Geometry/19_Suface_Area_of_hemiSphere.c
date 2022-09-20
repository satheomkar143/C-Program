#include<stdio.h>
main()
{
	int r;
	float area;
	printf("\nEnter radius of sphere: ");
	scanf("%d",&r);
	
	area = 2 * 3.14 * r * r;
	printf("\nSuface Area of a hemisphere : %.2f",area); 
}
