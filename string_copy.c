#include<stdio.h>
void copy(char a[100], char b[100]);
main()
{
	char s1[20], s2[20];
	int n;
	printf("Enter string A:\n");
	gets(s1);
	
	printf("Enter string B:\n");
	gets(s2);
	
	printf("After copy string B into A:\n");
	copy(s1,s2);
	//printf("%s",s1);
	
}
void copy(char a[100], char b[100])
{
	int i;
	
	for(i=0;b[i]!='\0';i++)
	{
		a[i] = b[i];
	}
	a[i] = '\0';
	printf("%s",a);
}
