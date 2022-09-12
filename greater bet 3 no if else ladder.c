#include<stdio.h>
main()
{
	int a, b, c;
	printf("\n Enter 3 numbers  ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		printf("\n %d is greater number",a);
	}
	if(b>a && b>c)
	{
		printf("\n %d is greater number",b);
	}
	else
	{
		printf("\n %d is greater number",c);
	}
}
