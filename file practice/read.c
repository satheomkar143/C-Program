#include<stdio.h>
main()
{
	char ch;
	FILE *fp;
	fp = fopen("read.txt","r");
	
	if(fp == 0)
		printf("File does not exist\n");
	else
	{
		while((ch = fgetc(fp)) != EOF)
		{
			printf("%c",ch);
		}
	}
	fclose(fp);
}
