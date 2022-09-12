#include<stdio.h>
main()
{
	char s1[20];
	int i,len=0;
	printf("enter the sting= \n");
	gets(s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		len++;
	}
	printf("lenght of string is = %d",len);
}
