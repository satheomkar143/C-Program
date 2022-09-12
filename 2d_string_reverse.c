#include<stdio.h>
main()
{
	char name[5][10];
	int i, j;
	int len;
	printf("\n enter 5 students name:\n");
	
	for(i=0;i<=4;i++)
	{
		scanf("%s",name[i]);
	}
	
	printf("display student names:\n");
	
	for(i=0;i<=4;i++)
	{
		printf("%s\n",name[i]);
	}
	
	//length of string
	
	printf("lenght of string\n");
	for(i=0;i<=4;i++)
	{
		len=0;
		for(j=0;j= strlen(name[i]);j++)
		{
			len++;
		}
		printf("\n\n%s lenght = %d",name[i],len);
	}
	printf("reverse string");
	for(i=0;i<=4;i++)
	{
		for(j= strlen(name[i]);j<=0;j--)
		{
			printf("%c",name[i][j]);
		}
		printf("\n");
	}
}
