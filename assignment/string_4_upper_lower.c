#include<stdio.h>
main()
{
	char s1[20];
	int i;
	printf("enter the string =\n");
	gets(s1);
	//uppercase
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='a' && s1[i]<='z')
		{
			s1[i] = s1[i]-32;
		}
	}
	printf("UPPERCASE = %s\n",s1);
	
	//lowercase
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='A' && s1[i]<='Z')
		{
			s1[i] = s1[i]+32;
		}
	}
	
	printf("lowercase = %s\n",s1);
}
