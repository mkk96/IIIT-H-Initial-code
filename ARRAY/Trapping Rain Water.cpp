#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int array[n],i;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int lo=0,hi=n-1,result=0,leftmax=0,rightmax=0;
	while(lo<=hi)
	{
		if(array[lo]<array[hi])
		{
			if(array[lo]>leftmax)
			{
				leftmax=array[lo];
			}
			else
			{
				result+=(leftmax-array[lo]);
			}
			lo++;
		}
		else
		{
			if(array[hi]>rightmax)
			{
				rightmax=array[hi];
			}
			else
			{
				result+=(rightmax-array[hi]);
			}
			hi--;
		}
	}
	cout<<result<<endl;
	return 0;
}
