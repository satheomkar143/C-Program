#include<stdio.h>
main()
{
	int i=1,j=1,k=10,table;
	printf("tables from 10 to 20 = \n");

	// vertical table
	while(i<=10)
	{
		j=10;
		while(j<=20)
		{
			table = j*i;
			j++;
			printf("%d\t",table);
		}
		i++;
		printf("\n");
	}
/*	
	//horizontal table
	while(k<=20)
	{
		j=1;
		while(j<=10)
		{
			table = k*j;
			j++;
			printf("%d\t",table);
		}
		k++;
		printf("\n");
	}
*/	
}
