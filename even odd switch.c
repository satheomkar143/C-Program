#include<stdio.h>
main()
{
	int n;
	printf("enter number :  ");
	scanf("%d",&n);
	
	switch(n%2 == 0)
	{
		case 1:
			printf("%d is even number",n);
			break;
		case 0:
			printf("%d is odd number",n);
	}
}
