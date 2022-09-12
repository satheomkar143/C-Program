#include<stdio.h>
main()
{
	int i=1,j,count;
	
	printf("prime number between 1 to 100 is : \n");
	
	while(i<=100)
	{
		j=2;
		count=0;
		while(j<i)
		{
			if(i%j==0)
			{
				count++;
			}
			j++;
		}
		if(count == 0)
		{
			printf("%d\t",i);
		}
		i++;
	}
}
