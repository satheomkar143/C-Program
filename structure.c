#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
};
main()
{
	struct student s1;
	printf("\nEnter rollno = ");
	scanf("%d",&s1.rollno);
	printf("\nEnter name = ");
	scanf("%s",&s1.name);
	printf("\nEnter marks = ");
	scanf("%f",&s1.marks);
	
	printf("\nrollno = %d",s1.rollno);
	printf("\nname = %s",s1.name);
	printf("\nmarks = %f",s1.marks);
}
