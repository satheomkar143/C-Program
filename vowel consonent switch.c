#include<stdio.h>
main()
{
	char ch;
	printf("Enter character:  ");
	scanf("%c",&ch);
	
	switch (ch)
	{
		case 'a':
			printf("vowel 'a'");
			break;
		case 'e':
			printf("vowel 'e'");
			break;
		case 'i':
			printf("vowel 'i'");
			break;
		case 'o':
			printf("vowel 'o'");
			break;
		case 'u':
			printf("vowel 'u'");
			break;
		default:
			printf("consonant '%c'",ch);
	}
}
