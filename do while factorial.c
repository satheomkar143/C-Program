#include<stdio.h>
#include<math.h>
main()
{
	int i = 1,n, fact = 1;
	printf("enter number");
	scanf("%d",&n);
		
	do
	{
		fact = fact*i;
		i++;
	}		
	while(i <= n);
	
	printf("factorial = %d",fact);
		
}
