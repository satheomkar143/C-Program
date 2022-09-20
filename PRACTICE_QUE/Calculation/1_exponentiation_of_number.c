#include<stdio.h>
main()
{
	int i, n, pow;
	unsigned int ans=1;
	printf("\nEnter number and power:");
	scanf("%d%d",&n,&pow);
	
	for(i=0;i<pow;i++)
	{
		ans *= n;
	}
	printf("%d to power %d : %u",n,pow,ans);
}
