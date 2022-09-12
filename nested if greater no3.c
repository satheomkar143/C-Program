#include<stdio.h>
main()
{
	int a, b, c;
	printf("enter three values = ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is a greater value",a);
		}
		else
		{
			printf("%d is a greater value",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is a greater value",b);
		}
		else
		{
			printf("%d is a greater value",c);
		}
	}
}
