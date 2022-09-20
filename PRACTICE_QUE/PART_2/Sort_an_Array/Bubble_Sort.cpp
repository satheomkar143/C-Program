/* Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. 
This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

First Pass: 
Bubble sort starts with very first two elements, comparing them to check which one is greater.
( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1. 
( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4 
( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2 
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.
*/
#include<iostream>
using namespace std;
int i, j;
void bubble(int a[], int n)
{
	int temp, n1=n;
	for(i=0;i<n;i++,n--)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	cout<<"\nAscending order: \n";
	for(i=0;i<n1;i++)
		cout<<a[i]<<"\t";
	cout<<"\n\nDescending order: \n";
	for(i=n1-1;i>=0;i--)
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
	
	bubble(a,n);
}
