#include<stdio.h>
main()
{
	int a,b;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	
	switch(a>b)
	{
		case 1:
			printf("max number : %d",a);
			break;
		case 0:
			printf("max number : %d",b);
	}
}
