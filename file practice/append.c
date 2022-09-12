#include<stdio.h>
main()
{
	char ch;
	FILE *fp;
	
	fp = fopen("append.txt","a+");
	
	printf("\ncontent before append:\n");
	while((ch = fgetc(fp)) != EOF)
	{
		printf("%c",ch);
	}

	printf("\nEnter string to append: ($ to exit)\n");
	while((ch = getche()) != '$')
	{
		fputc(ch, fp);
	}
	rewind(fp);
	printf("\ncontent after append:\n");
	while((ch = fgetc(fp)) != EOF)
	{
		printf("%c",ch);
	}
	
}
