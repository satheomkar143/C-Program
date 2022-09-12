#include<stdio.h>
#include<string.h>
main()
{
	int len = 0, i;
	char s1[20];
	
	printf("Enter string:\n");
	gets(s1);
	
	printf("str= %s\n",s1);
	len = strlen(s1);
	
	printf("reverse string =  ");
	for(i=len-1;i>=0;i--)
	{
		printf("%c",s1[i]);
	}
	
}
