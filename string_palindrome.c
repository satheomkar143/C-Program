#include<stdio.h>
#include<string.h>
main()
{
	int len = 0, i, j, count;
	char s1[20], s2[20];
	
	printf("Enter string:\n");
	gets(s1);
	
	len = strlen(s1);
	
	for(j=0, i=len-1;i>=0;i--,j++)
	{
		s2[j] = s1[i];
	}
	s2[j] = '\0';
	
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i] == s2[i])
		{
			count = 1;
			continue;
		}
		else
		{
			count = 0;
			printf("string is not palindrome\n");
			break;
		}
	}
	if(count == 1)
		printf("string is palindrome");
	
}
