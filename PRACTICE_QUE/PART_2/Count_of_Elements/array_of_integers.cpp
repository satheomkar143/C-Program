#include<iostream>
using namespace std;
static int i, j, cnt;
void odd(int a[], int n)
{
	cout<<"\nOdd numbers in array:\n";
	for(i=0;i<n;i++)
	{
		if(a[i] % 2 != 0)
			cout<<a[i]<<"\t";
	}
} 

void even(int a[], int n)
{
	cout<<"\nEven numbers in array:\n";
	for(i=0;i<n;i++)
	{
		if(a[i] % 2 == 0)
			cout<<a[i]<<"\t";
	}
} 

void prime(int a[], int n)
{
	cout<<"\nPrime numbers in array:\n";
	for(i=0;i<n;i++)
	{
		cnt = 1;
		for(j=2;j<a[i];j++)
		{
			if(a[i] % j == 0)
				cnt = 0;
		}
		if(cnt==1)
		cout<<a[i]<<"\t";
	}
} 

void square(int a[], int n)
{
	cout<<"\nPerfect square numbers in array:\n";
	for(i=0;i<n;i++)
	{
		cnt = 0;
		for(j=1;j<=a[i]/2;j++)
		{
			if(a[i] == j*j)
			{
				cnt = 1;
				break;
			}		
		}
		if(cnt==1 || a[i]==1)
		cout<<a[i]<<"\t";
	}
} 

void cube(int a[], int n)
{
	cout<<"\nPerfect cube numbers in array:\n";
	for(i=0;i<n;i++)
	{
		cnt = 0;
		for(j=1;j<=a[i]/2;j++)
		{
			if(a[i] == j*j*j)
			{
				cnt = 1;
				break;
			}		
		}
		if(cnt==1 || a[i]==1)
		cout<<a[i]<<"\t";
	}
} 
main()
{
	int n, a[n];
	cout<<"\nEnter array size: ";
	cin>>n;
	cout<<"\nEnter array elements: \n";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	odd(a,n);
	even(a,n);
	prime(a,n);
	square(a,n);
	cube(a,n);
}

