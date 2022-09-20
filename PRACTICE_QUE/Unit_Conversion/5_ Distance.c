#include<stdio.h>
main()
{
	int km, m, cm;
	printf("\nEnter distance in kilometer: ");
	scanf("%d",&km);
	
	m = 1000 * km;
	cm = 100 *m;
	printf("\n Distance in meter: %d",m);
	printf("\n Distance in centimeter: %d",cm);
}
