#include<stdio.h>
main()
{
	char s1[20],s2[20];
	int i,len=0,j,count=0;
	printf("enter the string= ");
	gets(s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		len++;
	}
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		s2[j]=s1[i];	 
	}
	s2[j]='\0';
	
	for(i=0;i<len;i++)
	{
	if(s1[i]==s2[i])
	{
		count=1;
	}
	else
	{
		count=0;
		printf("\nnot pallindrome");
		break;
	}
	}
	if(count==1)
	printf("pallindrome");
}
