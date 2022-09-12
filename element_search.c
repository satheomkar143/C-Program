#include<stdio.h>
main()
{
	// searching
	int a[5],found=0,key,i;
	printf("Enter array elements:\n");
	for (i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to search\n");
	scanf("%d",&key);
	for (i=0;i<=4;i++)
	{
		if(a[i]==key)
		{
			found = 1;
			break;
		}
	}
	if(found == 1)
	{
		printf("\nElement is found");
	}
	else
	{
		printf("\nElement is not found");
	}
}
