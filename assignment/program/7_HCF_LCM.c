#include<stdio.h>
main()
{
	int hcf, lcm, a, b, i;
	
	// HCF
	printf("Enter two number to calculate HCF: \n");
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
	printf("\nHCF of %d and %d is %d",a,b,hcf);
	
	//LCM
	
	printf("\n\nEnter two number to calculate LCM: \n");
	scanf("%d%d",&a,&b);
	
	i = a>b ? a : b;
	
	while(1)
	{
		if(i%a == 0 && i%b == 0)
		{
			lcm = i;
			break;
		}
		i++;
	}
	printf("\nHCF of %d and %d is %d",a,b,lcm);
	
}
