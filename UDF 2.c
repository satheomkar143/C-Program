#include<stdio.h>
void fun1();    //function prototype
void fun2(); 
void fun3(); 
main()
{
	fun1(); // function calling
	fun2(); 
	fun3(); 
}
void fun1()  // function defination
{
	printf("\n it is function 1");
}
void fun2()  // function defination
{
	fun1();
	printf("\n it is function 2");
}
void fun3()  // function defination
{
	printf("\n it is function 3");
	fun2();
}
