#include<stdio.h>
main()
{
	int a,b,c;
	char op;
	printf("enter a and b\n");
	scanf("%d%d",&a,&b);
	printf("enter the operator");
	scanf(" %c",&op);
	
	if(op=='+')
	{
		if(a==56 && b==9)
		{
			printf("56 + 9 = 77");
		}
		else
		{
			c = a + b ;
			printf("%d + %d = %d",a,b,c);
		}
	}
	else if(op=='-')
	{	
		c = a - b ;
		printf("%d - %d = %d",a,b,c);
	}
	else if(op=='*')
	{
		if(a==45 && b==3)
		{
			printf("45 * 3 = 555");
		}
		else
		{
			c = a * b ;
			printf("%d * %d = %d",a,b,c);
		}
	}
	else if(op=='/')
	{
		if(a==56 && b==6)
		{
			printf("56 / 6 = 4");
		}
		else
		{
	
			float c =(float)a / b ;
			printf("%d / %d = %.2f",a,b,c);
		}
	}
}

