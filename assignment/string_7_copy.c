#include<stdio.h>
main()
{
	char s1[20],s2[20];
	int i,len;
	printf("enter first string = \n");
	gets(s1);
	printf("enter the second string= \n");
	gets(s2);
	
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
	printf("copy = %s",s2);
}
