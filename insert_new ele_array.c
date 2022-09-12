#include<stdio.h>
main()
{
	int a[6], i, j, pos, new_ele;
	printf("Enter 5 number\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nnew elements position: ");
	scanf("%d",&pos);
	printf("\ninsert new element: ");
	scanf("%d",&new_ele);
	
	for(i=5;i>=pos-1;i--)
	{
		a[i+1] = a[i];		
	}
	
	a[pos-1] = new_ele;
	for(i=0;i<=5;i++)
	{
		printf("%d\t",a[i]);
	}
	
	

}

