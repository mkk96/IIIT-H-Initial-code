#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	map <string, int> nameMap;
	while(n--)
	{
		string name;
		getline(cin,name);
		stringstream ss(name);
		string firstname;
		ss>>firstname;
		nameMap[firstname]++;
	}
	int flag=0;
	map<string, int>::iterator itr;
	for(itr=nameMap.begin();itr!=nameMap.end();itr++)
	{
		if(itr->second>1)
		{
			flag = 1;
            cout<<itr->first<<" "<<itr->second<<endl;
		}
	}
	if(flag == 0)
        cout<<"-1"<<endl;
    return 0;
}
