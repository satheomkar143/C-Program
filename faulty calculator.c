#include<stdio.h>
main()
{
	int a, b, ans;
	char op;
	
	printf("enter two value\n");
	scanf("%d%d",&a, &b);
	
	printf("\nEnter the operator\n");
	scanf(" %c",&op);
	
	if(op == '+')
	{
		if(a == 56 && b == 9)
		{
			printf("56 + 9 = 77");
		}
		else
		{
			ans = a+b;
			printf("%d + %d = %d",a,b,ans);
		}
	}
	else if(op == '*')
	{
		if(a == 45 && b == 3)
		{
			printf("45 * 3 = 555");
		}
		else
		{
			ans = a*b;
			printf("%d * %d = %d",a,b,ans);
		}
	}
	else if(op == '/')
	{
		if(a == 56 && b == 6)
		{
			printf("56 / 6 = 4");
		}
		else
		{
			float ans = (float)a/b;
			printf("%d / %d = %.2f",a,b,ans);
		}
	}
	else if (op == '-')
	{
		ans = a-b;
		printf("%d - %d = %d",a, b, ans);
	}
	else
	{
		printf("\nInvalid operator\n Please enter operator only + - * /");
	}
}
