#include<stdio.h>
main()
{
	int n, i;
	float sum=0;
	printf("Enter range = ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		sum = sum + (1.0/i);
	}
	printf("\nsum of series 1 + 1/2 + 1/3 + .....+ 1/%d = %.2f\n",n,sum);
}
