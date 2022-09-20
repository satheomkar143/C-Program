#include<iostream>
using namespace std;
int i,j;
TWO_SUM(int *a, int n, int key)
{
	int max, n1=-1, n2=-1;
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] + a[j] == key)
			{
				max = a[n1] > a[n2] ? a[n1] : a[n2];
				if((a[i] >= max) || (a[j] >= max) )
				{
					n1 = i;
					n2 = j;
				}
				
			}
		}
	}
	if(n1 >= 0 && n2 >= 0)
		cout<<"\nTwo indices = "<<n1<<" & "<<n2;
	else
		cout<<"\nthere area no two values whose sum is "<<key;
}

main()
{
	int n, a[n], key;
	cout<<"\nEnter size of array: ";
	cin>>n;
	cout<<"\nEnter array elments:\n";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	cout<<"\nEnter target value: ";
	cin>>key;
		
	TWO_SUM(a,n,key);
	
}
