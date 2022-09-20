#include<stdio.h>
main()
{
	int hcf, a, b, i;

	printf("Enter two number to calculate GCD/HCF: \n");
	scanf("%d%d",&a,&b);
	
	i = a<b ? a : b;
	
	while(1)
	{
		if(a%i == 0 && b%i == 0)
		{
			hcf = i;
			break;
		}
		i--;
	}
	printf("\nGCD/HCF of %d and %d is %d",a,b,hcf);
	
}
