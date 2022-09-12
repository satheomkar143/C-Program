#include<stdio.h>
main()
{
	char s1[20],s2[20];
	int i,len1,len2,len,same=0;
	
	printf("enter the first array\n");
	gets(s1);
	
	printf("enter the second array\n");
	gets(s2);
	
	for(i=0;s1[i]!='\0';i++)
	{
		len1++;
	}
	for(i=0;s2[i]!='\0';i++)
	{
		len2++;
	}
	
	if(len1>len2)
	{
		len=len1;
	}
	else
	{
		len=len2;
	}
	
	for(i=0;i<len;i++)
	{
		if(s1[i]!=s2[i])
		{
			if(s1[i]>s2[i])
			{
				printf("string one is greater\n");
				same=1;
				break;
			}
			else
			{
				printf("string two is greater\n");
				same=1;
				break;
			}
		}
	}
	if(same==0)
	{
		printf("string one and two are same\n");
	}
}
