#include<stdio.h>
main()
{
	char ch;
	printf("Enter characcter: ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("\n'%c' is a vowel",ch);
			break;
		default:
			printf("\n'%c' is a consonant",ch);
			
	}
}
