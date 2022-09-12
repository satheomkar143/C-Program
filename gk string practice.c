#include<stdio.h>
#include<string.h>
main()
{
	char s1[20];
	int len;
	printf("enter string ");
	gets(s1);
	printf("\nthe string is = %s",s1);
	len = strlen(s1);
	printf("\nstring length is = %d",len);
	strrev(s1);
	printf("\n reverse string is = %s",s1);
	strupr(s1);
	printf("\n upper case value is = %s",s1);
	strlwr(s1);
	printf("\n lower case value is = %s",s1);
}

