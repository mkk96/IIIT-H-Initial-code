#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *next;
};
int main()
{
	int n,a;
	cin>>n;
	node *head=NULL;
	node *list1=NULL;
	node *list2=NULL;
	node *temp;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(head==NULL)
		{
			node *newnode=(node*)malloc(sizeof(node));
			newnode->val=a;
			newnode->next=newnode;
			head=newnode;
		}
		else
		{
			node *newnode=(node*)malloc(sizeof(node));
			newnode->val=a;
			newnode->next=head;
			temp=head;
			while(temp->next!=head)
			{
				temp=temp->next;
			}
			temp->next=newnode;
			head=newnode;
		}
	}
	node *slow=head;
	node *fast=head;
	while(fast->next!=head&&fast->next->next!=head)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	if(fast->next->next==head)
	{
		fast=fast->next;
	}
	list2=slow->next;
	fast->next=slow->next;
	slow->next=head;
	list1=head;
	temp=list1;
	do
	{
		cout<<temp->val<<" ";
		temp=temp->next;
	}while(temp!=list1);
	cout<<endl;
	temp=list2;
	do
	{
		cout<<temp->val<<" ";
		temp=temp->next;
	}while(temp!=list2);
	return 0;
}
