#include<stdio.h>
main()
{
	int n,  i;
	float sum=0, j;
	printf("Enter range = ");
	scanf("%d",&n);
	
	for(i=1,j=1; i<=n; i++,j=j+2)
	{
		sum = sum + (j*j)/(j*j*j);
	}
	printf("\nsum of series 1 + (3^2)/(3^3) + (5^2)/(5*3) + .....till %d terms = %.2f\n",n,sum);
}
