#include<iostream>
#include<bits/stdc++.h>
#include<queue>
#include<stack>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	stack<int> q1,q3,q2;
	while(n>0)
	{
		q1.push(n%2);
		n/=2;
	}
	q2.push(q1.top());
	q1.pop();
	while(!q1.empty())
	{
		q2.push(q2.top()^q1.top());
		q1.pop();
	}
	int sum=0,i=0;
	while(!q2.empty())
	{
		sum+=q2.top()*pow(2,i++);
		q2.pop();
	}
	cout<<sum;
	return 0;
}
