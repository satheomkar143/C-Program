#include<stdio.h>
main()
{
	char s1[20],s2[20];
	int i,j,len=0;
	printf("enter the sting= \n");
	gets(s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		len++;
	}
	
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		s2[j] = s1[i];
	}
	s2[j] = '\0';
	printf("reverse string is = %s",s2);
}
