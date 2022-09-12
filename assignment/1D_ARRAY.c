#include<stdio.h>
main()
{
	int n, a[n], j, i, temp, ele;
	int count=0, sum=0, odd_s=0, even_s=0;
		
	//Accept Elements from user
	printf("Enter array size= ");
	scanf("%d",&n);
		
	printf("\nenter array element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	//Display all elements from array.
	//Sum of all elements
	printf("\n\nGiven array :\n");
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
		printf("%d\t",a[i]);
	}
	
	//Display all elements at even and odd index
	// even index
	printf("\n\nEven index elements : \n");
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			even_s = even_s + a[i];
			printf("%d\t",a[i]);
		}			
	}
	
	// odd index
	printf("\n\nodd index elements : \n");
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			odd_s = odd_s + a[i];
			printf("%d\t",a[i]);
		}			
	}
	
	//Sum of all elements
	printf("\n\nsum of all elements = %d",sum);
	
	//Sum of elements at even and odd index
	printf("\n\nsum of odd index elements = %d",odd_s);
	printf("\n\nsum of even index elements = %d",even_s);

	//Sorting	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\n\nAfter sorting array in ascending order :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
/*
	//Searching
	printf("\n\nEnter number to search in array = ");
	scanf("%d",&ele);
	
	for(i=0;i<n;i++)
	{
		if(a[i] == ele)
		{
			count++;
		}			
	}
	
	if(count > 0)
		printf("\n%d present %d times in array\n",ele,count);
	else
		printf("\n%d not present in array\n",ele);
*/
}
