#include<stdio.h>
main()
{
	int p, n;
	float r, interest;
	
	printf("enter the principle amount= ");
	scanf("%d",&p);
	printf("enter the time period= ");
	scanf("%d",&n);
	printf("enter the rate of interest= ");
	scanf("%f",&r);
	
	interest = p*n*r/100;
	printf("\n simple interest =%f ",interest);
}
