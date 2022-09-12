#include<stdio.h>
main()
{
	int a,b,c,max,sum;
	printf("\nenter three side of tringle = ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			max = a;
			sum = b + c;
		}
		else
		{
			max = c;
			sum = b + a;
		}
	}
	else 
	{
		if(b>c)
		{
			max = b;
			sum = a + c;
		}
		else
		{
			max = c;
			sum = b + a;
		}
	}
	if(sum>max)
	{
		printf("tringle is valid");
	}
	else
	{
		printf("tringle is not valid");
	}
}
