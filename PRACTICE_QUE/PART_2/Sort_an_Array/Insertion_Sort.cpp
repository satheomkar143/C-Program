/* Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.

Insertion sort works similarly as we sort cards in our hand in a card game.

We assume that the first card is already sorted then, we select an unsorted card. 
If the unsorted card is greater than the card in hand, it is placed on the right otherwise, to the left.
 In the same way, other unsorted cards are taken and put in their right place.
 */
#include<iostream>
using namespace std;
int i, j;
void Insertion(int a[], int n)
{
	int temp;
	for(i=0;i<n-1;i++)
	{
		if(a[i] > a[i+1] )
		{
			temp = a[i+1];
			for(j=i;j>=0;j--)
			{
				if(temp < a[j])
				{
					a[j+1] = a[j];
				}
				else					
					break;
			}	
			a[j+1] = temp;		
		}
		
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
	
	 Insertion(a,n);
}
