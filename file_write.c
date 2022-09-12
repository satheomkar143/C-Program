#include<stdio.h>
main()
{
	FILE *fptr;
	int id;
	char name[30];
	float salary;
	fptr = fopen("emp.txt","w");		//open for writing
	
	printf("\nEnter the id: ");
	scanf("%d",&id);
	fprintf(fptr, "id = %d\n",id);
	
	printf("\nEnter the name: ");
	scanf("%s",&name);
	fprintf(fptr, "id = %s\n",name);
	
	printf("\nEnter the salary: ");
	scanf("%f",&salary);
	fprintf(fptr, "id = %.2f\n",salary);
	
	fclose(fptr);
}
