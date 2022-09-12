#include<stdio.h>
void concat(char a[100], char b[100]);
main()
{
	char s1[20], s2[20];
	int n;
	printf("Enter string A:\n");
	gets(s1);
	
	printf("Enter string B:\n");
	gets(s2);
	
	concat(s1,s2);
	
}

void concat(char a[100], char b[100])
{
	int i,len;
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	for(i=0,len;b[i]!='\0';i++,len++)
	{
		a[len] = b[i];
	}
	printf("%s",a);
}
