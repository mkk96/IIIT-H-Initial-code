#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
 
    else
        return gcd(b, a % b);
}
int main()
{
	int n,k;
	cin>>n>>k;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int d=k%n;
	int g_c=gcd(n,d);
	for(int i=0;i<g_c;i++)
	{
		int temp=array[i];
		int j=i;
		while(1)
		{
			int k=j+d;
			if(k>=n)
				k=k-n;
			if(k==i)
			break;
			array[j]=array[k];
			j=k;
		}
		array[j]=temp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}
