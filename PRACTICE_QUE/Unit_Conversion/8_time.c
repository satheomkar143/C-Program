#include<stdio.h>
main()
{
	float h;
	int m ,c;
	printf("\nEnter time in hour: ");
	scanf("%f",&h);
	
	m = h * 60;
	c = m * 60;
	
	printf("\nTime in minute: %d",m);
	printf("\nTime in second: %d",c);
	
}
