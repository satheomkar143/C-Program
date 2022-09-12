#include<stdio.h>
main()
{
	int a[5], i, j, pos;
	printf("Enter 5 number\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\ndelete elements position: ");
	scanf("%d",&pos);
	
	
	for(i=pos-1;i<=4-1;i++)
	{
		a[i] = a[i+1];		
	}
	
	for(i=0;i<4;i++)
	{
		printf("%d\t",a[i]);
	}
	
	

}

