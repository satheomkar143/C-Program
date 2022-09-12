#include<stdio.h>
#include<string.h>
main()
{
	int i, same=0,len, len1=0, len2=0;
	char s1[20], s2[20];
	
	printf("Enter string A:\n");
	gets(s1);
	
	printf("Enter string B:\n");
	gets(s2);
	
	for(i=0;s1[i]!='\0';i++)
	{
		len1++;
	}
	for(i=0;s2[i]!='\0';i++)
	{
		len2++;
	}
	len = len1>len2 ? len1 : len2;
	
	for(i=0;i<=len;i++)
	{
		if(s1[i] == s2[i])
		{
			same = 1;
			continue;
		}
			
		else
		{
			if(s1[i] > s2[i])
			{
				printf("String A is greater than B\n");
				same = 0;
				break;
			}				
			else
			{
				printf("String B is greater than A\n");
				same = 0;
				break;
			}	
		} 
	}
	if(same == 1)
		printf("string A and B are same");
}
