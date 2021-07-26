#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int Arrival[n];
    int departure[n];
    for(int i=0;i<n;i++)
    {
        cin>>Arrival[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>departure[i];
    }
    sort(Arrival,Arrival+n);
    sort(departure,departure+n);
    int count=0,result=0,i=0,j=0;
    while(i<n&&j<n)
    {
        if(Arrival[i]<departure[j])
        {
            i++;
            count++;
        }
        else if(Arrival[i]>departure[j])
        {
            j++;
            count--;
        }
        else
        {
        	i++;
        	j++;
		}
        if(count>result)
            result=count;
    }
    cout<<result<<endl;
    return 0;
}

