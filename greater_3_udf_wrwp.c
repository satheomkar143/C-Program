#include<stdio.h>
void greater();
main()
{
	greater();
}

void greater()
{
	int a, b, c;
	printf("enter a, b, c:  ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is greater",a);
		}
		else
		{
			printf("%d is greater",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is greater",b);
		} 
		else
		{
			printf("%d is greater",c);
		}
	}
}
