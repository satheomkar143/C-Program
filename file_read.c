#include<stdio.h>
main()
{
	FILE *fp;
	char ch;
	fp = fopen("dream.txt","r");
	if(fp == NULL)
	{
		printf("file does not exists\n");
	}
	while(1)
	{
		ch = getc(fp);
		if(ch == EOF)
			break;
		printf("%c",ch);
	}
	fclose(fp);
}
