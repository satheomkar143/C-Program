#include<stdio.h>
int greater(int, int, int);
main()
{
	int a, b, c, ans;
	printf("enter a, b, c:  ");
	scanf("%d%d%d",&a,&b,&c);
	ans = greater(a, b, c);
	printf("%d is greater",ans);
}

int greater(int a, int b, int c)
{
	
	
	if(a>b)
	{
		if(a>c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if(b>c)
		{
			return b;
		} 
		else
		{
			return c;
		}
	}
}
