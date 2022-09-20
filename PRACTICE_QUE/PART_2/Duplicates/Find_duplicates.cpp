#include<iostream>
using namespace std;
int i,j;

void duplicate(int *a, int n)
{
	int temp, count=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			}
		}		
	}
	cout<<"\nduplicate elements in array:\n";
	for(i=0;i<n;i++)
	{
		count = 0;
		if(a[i] != a[i-1])
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					count++;
					break;
				}
			}
			if(count == 1 )
				cout<<a[i]<<"\t";	
		} 
	}
}

main()
{
	int n, a[n];
	cout<<"\nEnter array size: ";
	cin>>n;
	cout<<"\nEnter array elements\n";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	duplicate(a,n);
}
