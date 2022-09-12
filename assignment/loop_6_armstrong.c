#include<stdio.h>
main()
{
	int n,sum=0,rem,temp;
	printf("\nenter any number= ");
	scanf("%d",&n);
	temp = n;
	
	while(n!=0)
	{
		rem=n%10;
		sum = sum + rem * rem * rem;
		n=n/10;
	}
	if(temp==sum)
		printf("armstrong number");
	else
		printf("non armstrong number");
}
