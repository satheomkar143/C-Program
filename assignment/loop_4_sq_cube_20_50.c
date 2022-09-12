#include<stdio.h>
main()
{
	int i,sq,cube;
	printf("number\tsquare\tcube");
	
	for(i=20;i<=50;i++)
	{
		sq = i * i;
		cube = i * i * i;
		printf("\n%d\t%d\t%d",i,sq,cube);
	}
}
