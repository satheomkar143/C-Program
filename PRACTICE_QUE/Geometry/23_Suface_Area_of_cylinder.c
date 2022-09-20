#include<stdio.h>
main()
{
	int r, h;
	float area;
	printf("\nEnter radius and height of cylinder: ");
	scanf("%d%d",&r,&h);
	
	area = 2 * 3.14 * r * (r + h);
	printf("\nSuface Area of a cylinder : %.2f",area); 
}
