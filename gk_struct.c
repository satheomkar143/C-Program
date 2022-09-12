#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float mark;
};
main()
{
	struct student s1;
	printf("enter roll no=\n");
	scanf("%d",&s1.rollno);
	printf("enter name of student=\n");
	scanf("%s",&s1.name);
	printf("enter marks=\n");
	scanf("%f",&s1.mark);
	
	printf("\nroll no. = %d",s1.rollno);
	printf("\nname of the student is = %s",s1.name);
	printf("\nmarks of the student = %.2f",s1.mark);
	
	printf("\n\n%s is fail cause college want him fail",s1.name);
}
