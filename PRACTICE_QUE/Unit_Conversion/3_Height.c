#include<stdio.h>
main()
{
	float feet, inch, cent;
	printf("\nEnter height in feet: ");
	scanf("%f",&feet);
	
	inch = feet * 12;
	cent = feet * 30;
	
	printf("\nfeet to inch = %.2f",inch);
	printf("\nfeet to centimeter = %.2f",cent);
}
