#include<stdio.h>
main()
{
	int n;
	printf("enter number :  ");
	scanf("%d",&n);
	
	switch(n > 0)
	{
		case 1:
			printf("%d is positive number",n);
			break;
		case 0:
			switch(n == 0)
			{
				case 1:
					printf("%d is zero",n);
					break;
				case 0:
					printf("%d is negative number",n);
			}
			
	}
}
