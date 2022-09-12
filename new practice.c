#include<stdio.h>
#include<math.h>
main()
{
	float a, b, c;
	float root1, root2, imaginary;
	float discr;
	
	printf("enter the values of a, b, c of quadratic eq (aX^2 + bX + c = 0):");
	scanf("%f%f%f",&a,&b,&c);
	
	discr = (b * b)-(4 * a * c);
	
	switch(discr>0)
	{
		case 1:
			root1 = (-b + sqrt(discr)) / (2 * a);
			root2 = (-b - sqrt(discr)) / (2 * a);
			printf("two distinct and real roots are exists : %.2f and %.2f",root1,root2);
			break;
			
		case 0:
			switch(discr<0)
			{
				case 1:
					root1 = root2 = -b / (2 * a);
					imaginary = sqrt(-discr) / (2 * a);
					printf("two distinct and imaginary roots are exists : %.2f + i%.2f and %.2f - i%.2f",root1, imaginary, root2, imaginary);
					break;
					
				case 0:
					root1 = root2 = - b / 2 * a;
					printf("two real and equal roots are exists : %.2f and %.2f",root1, root2);
			}
	}
}
