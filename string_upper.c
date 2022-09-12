#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char s1[50];
	
	printf("Enter string:\n");
	gets(s1);
	
	printf("\nupper case string :\n");
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i] >= 97 && s1[i] <= 122)
			printf("%c",s1[i]-32);
		else
			printf("%c",s1[i]);

	}
	
}
