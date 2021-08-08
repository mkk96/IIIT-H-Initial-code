#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *next;
};
bool detect(node *head)
{
	node *slow=head;
	node *fast=head->next;
	while(slow!=NULL&&fast!=NULL&&fast->next!=NULL)
	{
		if(slow==fast)
		{
			return true;
		}
		slow=slow->next;
		fast=fast->next->next;
	}
	return false;
}
int main()
{
	int n,a;
	cin>>n;
	node *head=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		node *newnode=(node *)malloc(sizeof(node));
		newnode->val=a;
		newnode->next=head;
		head=newnode;
	}
	head->next->next->next->next = head;
	if(detect(head))
	{
		cout<<"Loop Found"<<endl;
	}
	else
	{
		cout<<"Not Found"<<endl;
	}
	return 0;
}
