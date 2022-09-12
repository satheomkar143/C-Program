#include<stdio.h>
main()
{
	int i, digit=0, l_alpha=0, u_alpha=0, space=0, s_char=0;
	char s1[50];
	
	printf("Enter string:\n");
	gets(s1);
	
	for(i=0; s1[i]!='\0'; i++)
	{
		if(s1[i]>=48 && s1[i]<=57)
			digit++;
		else if(s1[i]>=97 && s1[i]<=122)
			l_alpha++;
		else if(s1[i]>=65 && s1[i]<=90)
			u_alpha++;
		else if(s1[i] == ' ')
			 space++;
		else
			s_char++;
	}
	
	printf("\nnumber of digits: %d\n\n",digit);
	printf("number of lower case alphabet: %d\n\n",l_alpha);
	printf("number of upper case alphabet: %d\n\n",u_alpha);
	printf("number of space: %d\n\n",space);
	printf("number of special characters: %d\n\n",s_char);

}

