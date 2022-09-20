/* Set the first element as minimum

Compare minimum with the second element. If the second element is smaller than minimum, assign the second element as minimum.
Compare minimum with the third element. Again, if the third element is smaller, then assign minimum to the third element otherwise do nothing.
 The process goes on until the last element.
 
 After each iteration, minimum is placed in the front of the unsorted list
*/ 
#include<iostream>
using namespace std;
int i, j;
void Selection(int a[], int n)
{
	int temp, min, s;
	for(i=0;i<n-1;i++)
	{
		s=i;
		min = a[i];
		for(j=i+1;j<n;j++)
		{
			if(min > a[j])
			{
				min = a[j];
				s = j;
			}
		}
		temp = a[i];
		a[i] = a[s];
		a[s] = temp;
	}
	cout<<"\nAscending order: \n";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
	cout<<"\n\nDescending order: \n";
	for(i=n-1;i>=0;i--)
		cout<<a[i]<<"\t";
}
main()
{
	int n, a[n];
	cout<<"\nEnter number of element: ";
	cin>>n;
	cout<<"\nEnter array element: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	 Selection(a,n);
}
