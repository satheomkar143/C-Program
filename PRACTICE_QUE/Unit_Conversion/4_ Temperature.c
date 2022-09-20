#include<stdio.h>
main()
{
	float deg, far;
	
	printf("Enter temperature in degree Celsius(C): ");
	scanf("%f",&deg);
	
	far = deg * 9/5 +32;
	printf("\ntemp in Fahrenheit: %.2f",far);
	
	printf("\nEnter temperature in Fahrenheit(F): ");
	scanf("%f",&far);
	
	deg = (far-32) * 5/9;
	printf("\ntemp in degree Celsius: %.2f",deg);
}
