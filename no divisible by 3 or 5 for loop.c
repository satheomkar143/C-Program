#include<stdio.h>
main()
{
	int i, range;
	printf("enter range\n ");
	scanf("%d",&range);
	printf("no divisible by 3 or 5 is \n");
	for(i=3; i<=range; i++)
	{
		if(i%3==0 || i%5==0)
		 printf("%d\n ",i);
	}
}
