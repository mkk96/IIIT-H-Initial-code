#include<iostream>
#include<bits/stdc++.h>
#include<queue>
#include<math.h>
#include<stack>
using namespace std;
int main()
{
	int n;
	cin>>n;
	stack<int> q1,q3;
	queue<int> q2;
	while(n>0)
	{
		q1.push(n%2);
		n/=2;
	}
	q2.push(q1.top());
	int temp=q1.top();
	q1.pop();
	while(!q1.empty())
	{
		q2.push(temp^q1.top());
		temp=q1.top();
		q1.pop();
	}
	while(!q2.empty())
	{
		q3.push(q2.front());
		q2.pop();
	}
	int sum=0,i=0;
	while(!q3.empty())
	{
		sum+=q3.top()*(int)pow(2,i);
		i++;
		q3.pop();
	}
	cout<<sum;
}
