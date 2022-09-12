#include<stdio.h>
main()
{
	FILE *fp;
	char c;
	printf("contents of file before appending\n");
	
	fp = fopen("file2.txt","r");		//to display tha file
	
	while(!feof(fp))
	{
		c= fgetc(fp);		//from file to monitor
		printf("%c",c);
	}
	fclose(fp);
	
	fp= fopen("file2.txt","a");
	if(fp == NULL)
	{
		printf("file cannot append");
	}
	printf("\nEnter string to append\n");
	while(c!='.')
	{
		c = getche();
		fputc(c,fp);		//from monitor to file
	}
	fclose(fp);
	
	printf("\n contents of file after appending\n");
	fp = fopen("file2.txt","r");
	while(!feof(fp))
	{
		c= fgetc(fp);		
		printf("%c",c);
	}
	fclose(fp);
}
