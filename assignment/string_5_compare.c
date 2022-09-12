#include<stdio.h>
main()
{
	char s1[20],s2[20];
	int i,len,len1=0,len2=0, count=0;
	printf("enter first string = \n");
	gets(s1);
	printf("enter the second string= \n");
	gets(s2);
	
	for(i=0; s1[i]!='\0';i++)
	{
		len1++;
	}
	for(i=0; s2[i]!='\0';i++)
	{
		len2++;
	}
	len = len1>len2 ? len1 : len2;
	
	for(i=0; i < len; i++)
	{
		if(s1[i] != s2[i])
		{
			if(s1[i] > s2[i])
			{
				printf("\nstring 1 is greater than string 2\n");
				count = 1;
				break;
			}
			else
			{
				printf("\nstring 2 is greater than string 1\n");
				count=-1;
				break;
			}
		}
	}
	if(count == 0)
	{
		printf("both strings are same");
	}

}
