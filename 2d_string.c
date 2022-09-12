#include<stdio.h>
main()
{
	// 2d character array
	char name[5][10] ={"scott", "martin","blake","smith","john"};
	
	printf("\n%s",name[0]);
	printf("\n%s",name[1]);
	printf("\n%s",name[4]);
	
	printf("\n%c",name[0][2]);
	printf("\n%c",name[3][2]);
}
