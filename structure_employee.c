#include<stdio.h>
struct employee
{
	int id, salary;
	char name[20];
};
main()
{
	struct employee e1, e2;
	printf("enter id, name, salary :\n");
	scanf("%d%s%d",&e1.id,&e1.name,&e1.salary);
	printf("enter id, name, salary :\n");
	scanf("%d%s%d",&e2.id,&e2.name,&e2.salary);
	
	printf("\n%d\t%s\t%d",e1.id,e1.name,e1.salary);
	printf("\n%d\t%s\t%d",e2.id,e2.name,e2.salary);
	
	
}
