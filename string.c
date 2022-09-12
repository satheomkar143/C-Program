#include<stdio.h>
#include<string.h>
main()
{
	char s1[20], s2[20];
	int len;
	printf("Enter string:\n");
	
	// scanf("%s",s1);
	gets(s1);
	
	printf("Enter string:\n");
	gets(s2);
	
	printf("the string is:\t%s",s1);
	
	len = strlen(s1);
	printf("\nstring length:\t%d",len);
	
	strrev(s1);
	printf("\nreverse string:%s\n",s1);
	
	strupr(s1);
	printf("upper case string: %s\n",s1);
	
	strlwr(s1);
	printf("lower case string: %s\n",s1);
	
	int n = strcmp(s1,s2);
	printf("%d",n);
	
	strcat(s1,s2);
	printf("\n concatination = %s\n",s1);
	
	strcpy(s2,s1);
	printf("copy = %s",s2);
		
}
