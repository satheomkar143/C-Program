#include<stdio.h>
main()
{
	char s1[20],s2[20];
	int i,j,len;
	printf("enter first string = \n");
	gets(s1);
	printf("enter the second string= \n");
	gets(s2);
	
	for(i=0;s1[i]!='\0';i++)
	{
		len++;
	}
	for(i=len,j=0;s2[j]!='\0';i++,j++)
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';
	
	printf("concatination = %s",s1);
}
