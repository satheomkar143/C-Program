#include<stdio.h>
struct employee
{
	int e_id;
	char e_name[20];
	float e_sal;
};
main()
{
	struct employee E1;
	printf("enter employee id =\n");
	scanf("%d",&E1.e_id);
	printf("enter employee name =\n");
	scanf("%s",&E1.e_name);
	printf("enter employee salary =\n");
	scanf("%f",&E1.e_sal);
	
	printf("employee id = %d\n",E1.e_id);
	printf("employee name = %s\n",E1.e_name);
	printf("employee salary = %f\n",E1.e_sal);

	printf("\n\n\nyou have low salary so start chaha cha gada (lay scope hay)");
}
