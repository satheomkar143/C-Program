#include<stdio.h>
main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	switch(n>0)
	{
		case 1:
			printf("\n%d is a positive number",n);
			break;
		case 0:
			switch (n<0)
			{
				case 1:
					printf("\n%d is a negative number",n);
					break;
				case 0:
					printf("\nit is a zero");
			}
	}
}
