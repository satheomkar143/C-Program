//circular prime == 113 131 311 and check prime or not

#include<stdio.h>
#include<math.h>
main()
{
	int n, i, j, count=0, temp, len=0, rem;
	printf("\nEnter number: ");
	scanf("%d",&n);
	temp = n;
	while(temp != 0)   	// len of number
	{
		len++;
		temp /=10;
	}
	
	for(i=2;i<n;i++)		//check number is prime or not
	{
		if(n%i == 0)
		{
			count = 1;
			break;
		}
	}
	temp = n;
	if(count == 0)				//if number is prime go inside
	{
		for(i=1;i<len;i++)
		{
			rem = temp%10; 				//number circulation
			temp /= 10;
			temp = rem * pow(10,len-1) + temp;
			
			for(i=2;i<temp;i++)		//check number is circular prime or not
			{
				if(temp%i == 0)
				{
					count = 1;
					break;
				}
			}
		}
		if(count == 0)
			printf("\n%d is circular prime number",n);
		else 
			printf("\n%d is not circular prime number",n);
	}
	else
		printf("\n%d is not circular prime number",n);
}
