#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sort0nd1(int *array,int n)
{
	int low=0;
	int high=n-1;
	int mid=0;
	while(mid<=high)
	{
		switch(array[mid])
		{
			case 0:
				swap(array[low++],array[mid++]);
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(array[mid],array[high--]);
				break;
		}
	}
	for(int i=0;i<n;i++)
		cout<<array[i]<<" ";
}
int main()
{
	int n;
	cin>>n;
	int array[n],i;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	sort0nd1(array,n);
	return 1;
}
