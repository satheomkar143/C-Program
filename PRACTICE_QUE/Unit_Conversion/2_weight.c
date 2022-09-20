#include<stdio.h>
main()
{
	int kg, g;
	float lb;
	printf("\nEnter weight in kg: ");
	scanf("%d",&kg);
	
	g = kg * 1000;
	printf("\nKilogram to pound (kg to g) = %d",g);
	
	lb = kg * 2.2046;
	printf("\nKilograms to Pounds (kg to lbs) = %.2f",lb);
	
}
