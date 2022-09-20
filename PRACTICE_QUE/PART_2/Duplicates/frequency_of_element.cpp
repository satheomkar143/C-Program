#include<iostream>
using namespace std;
int i,j;

void freq(int *a, int n)
{
	int temp, count;
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
	for(i=0;i<=4;i++)
	{
		count=1;
		if(a[i] != a[i-1])
		{
			for(j=i+1;j<=4;j++)
			{
				if(a[i]==a[j])
					{
						count++;
					}
			}	
				cout<<a[i]<<" is present "<<count<<" times.\n";	
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
		
	freq(a,n);
}
