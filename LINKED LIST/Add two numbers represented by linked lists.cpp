#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *next;
};
int main()
{
	int n,m,a;
	cin>>n>>m;
	node *num1=NULL;
	node *num2=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		node *temp=(node *)malloc(sizeof(node));
		temp->val=a;
		temp->next=num1;
		num1=temp;
	}
	for(int i=0;i<m;i++)
	{
		cin>>a;
		node *temp=(node *)malloc(sizeof(node));
		temp->val=a;
		temp->next=num2;
		num2=temp;
	}
	int carry=0;
	node *result=NULL;
	while(num1!=NULL&&num2!=NULL)
	{
		int value=num1->val+num2->val+carry;
		node *temp=(node*)malloc(sizeof(node));
		temp->val=value%10;
		carry=value/10;
		temp->next=result;
		result=temp;
		num1=num1->next;
		num2=num2->next;
	}
	while(num1!=NULL)
	{
		int value=num1->val+carry;
		node *temp=(node*)malloc(sizeof(node));
		temp->val=value%10;
		carry=value/10;
		temp->next=result;
		result=temp;
		num1=num1->next;
	}
	while(num2!=NULL)
	{
		int value=num2->val+carry;
		node *temp=(node*)malloc(sizeof(node));
		temp->val=value%10;
		carry=value/10;
		temp->next=result;
		result=temp;
		num2=num2->next;
	}
	if(carry>0)
	{
		node *temp=(node*)malloc(sizeof(node));
		temp->val=carry;
		temp->next=result;
		result=temp;
	}
	while(result!=NULL)
	{
		cout<<result->val<<" ";
		result=result->next;
	}
	return 0;
}
