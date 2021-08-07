#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	struct node *next;
};
int main()
{
	int n;
	cin>>n;
	struct node *head=NULL;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		struct node *temp=(struct node *)malloc(sizeof(struct node));
		temp->val=a;
		temp->next=head;
		head=temp;
	}
	struct node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	return 0;
}
