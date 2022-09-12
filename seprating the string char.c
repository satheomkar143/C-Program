#include<stdio.h>
main()
{
	char s1[100];
	int i,digit=0,smallalphabets=0,capitalalphabets=0,space=0,specialchar=0;
	printf("enter the string =\n");
	gets(s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='0' && s1[i]<='9')
		{
			digit++;
		}
		else if(s1[i]>='a' && s1[i]<='z')
		{
			smallalphabets++;
		}
		else if(s1[i]>='A' && s1[i]<='Z')
		{
			capitalalphabets++;
		}
		else if(s1[i]==' ')
		{
			space++;
		}
		else
		{
			specialchar++;
		}
	}
		printf("\ntotal digits are =%d",digit);
		printf("\ntotal small alphabets are =%d",smallalphabets);
		printf("\ntotal capital alphabets are =%d",capitalalphabets);
		printf("\ntotal spaces are =%d",space);
		printf("\ntotal special charactes are =%d",specialchar);
}
