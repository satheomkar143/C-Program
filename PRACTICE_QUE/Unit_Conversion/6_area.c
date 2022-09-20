#include<stdio.h>
main()
{
	float area, areak, areac;
	printf("\nEnter area in m^2: ");
	scanf("%f",&area);
	
	areak = area / 1000000;
	areac = area * 10000; 
	printf("\nArea in km^2: %f",areak);
	printf("\nArea in cm^2: %.2f",areac);
}
