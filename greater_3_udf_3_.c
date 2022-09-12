#include<stdio.h>
int greater();
main()
{
	
	int ans = greater();
	printf("%d is greater",ans);
}

int greater()
{
	int a, b, c;
	printf("enter a, b, c:  ");
	scanf("%d%d%d",&a,&b,&c);
	
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
