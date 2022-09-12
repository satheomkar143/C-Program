#include<stdio.h>
main()
{
	int a,b,c;
	printf("\nenter values of a,b,c= ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\n a is greater");
		}
		else
		{
			printf("\n c is greater");
		}
	}
	else 
	{
		if(b>c)
		{
			printf("b is gretaer");
		}
		else
		{
			printf("c is gretaer");
		}
	}
}
