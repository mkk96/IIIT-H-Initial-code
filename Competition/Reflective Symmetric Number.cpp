#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#define lli long long int
using namespace std;
int main()
{
    lli num,number;
    cin>>number;
    num=number;
    stack<int> s;
    while(num)
    {
        int temp=num%10;
        if(temp==1||temp==0||temp==8)
        {
        	s.push(temp);
		}
        else if(temp==6)
        {
        	s.push(9);
		}
		else if(temp==9)
        {
        	s.push(6);
		}
		else
		{
			break;
		}
		num/=10;
    }
    if(num>0)
    {
    	cout<<"NO"<<endl;
	}
	else
	{
		int i=0,sum=0;
		while(!s.empty())
		{
			sum+=s.top()*pow(10,i++);
			s.pop();
		}
		if(sum==number)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}

    return 0;
}
