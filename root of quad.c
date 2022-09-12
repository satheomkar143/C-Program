#include<stdio.h>
#include<math.h>
main()
{
	float a, b, c, r1, r2, delta, img;
	printf("Enter coefficient of a,b,c of Quadratic eq.  :  ");
	scanf("%f%f%f",&a,&b,&c);
	
	delta = (b*b)-(4*a*c);
	
	switch(delta>0)
	{
		case 1:
			r1 = (-b+ sqrt(delta))/(2*a);
			r2 = (-b- sqrt(delta))/(2*a);
			printf("roots are distinct and real: %.2f and %.2f",r1, r2);
			break;
			
		case 0:
			switch(delta<0)
			{
				case 0:
					r1 = r2 = -b/(2*a);
					printf("roots are equal and real: &.2f and %.2f",r1,r2);
					break;
					
				case 1:
					r1 = r2 = -b/(2*a);
					img = sqrt(-delta)/(2*a);
					printf("roots are distinct and imaginary : %.2f+i%.2f and %.2f-i%.2f",r1,img,r2,img);
			}
	}
}
