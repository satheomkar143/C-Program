#include<stdio.h>
main()
{
	int a, b;
	printf("enter two number :  ");
	scanf("%d%d",&a, &b);
	
	switch(a>b)
	{
		case 1:
			printf("greater number : %d",a);
			break;
		case 0:
			printf("greater number : %d",b);
	}
}
