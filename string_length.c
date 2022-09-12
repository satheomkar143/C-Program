#include<stdio.h>
main()
{
	int len = 0, i;
	char s1[20];
	
	printf("Enter string:\n");
	gets(s1);
	
	printf("str= %s\n",s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		len++;
	}
	printf("length = %d",len);
}
