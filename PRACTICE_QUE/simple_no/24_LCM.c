#include<stdio.h>
main()
{
	int a, b, i, lcm;
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
	printf("\nLCM of %d and %d is %d",a,b,lcm);
}
