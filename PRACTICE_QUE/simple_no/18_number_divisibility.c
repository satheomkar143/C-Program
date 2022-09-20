#include<stdio.h>
main()
{
	int i,n, cnt=0;
	static int a[4]; 
	printf("Enter number: ");
	scanf("%d",&n);

	if(n%2 == 0)
	{
		a[0] = 2;
		cnt = 1;
	}		
	if(n%3 == 0)
	{
		a[1] = 3;
		cnt = 1;
	}	
	if(n%5 == 0)
	{
		a[2] = 5;
		cnt = 1;
	}	
	if(n%9 == 0)
	{
		a[3] = 9;
		cnt = 1;
	}	
	
	
	if(cnt==1)
	{
		printf("number is divisible by ");
		for(i=0;i<4;i++)
		{
			if(a[i] != 0)
			{
				printf("%d ",a[i]);
			}			
		}
	}
	else
		printf("number is not divisible by 2, 3, 5, 9");
	
}
