#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *next;
};
void circular(node **head,int a)
{
	node *current=*head;
	node *newnode=(node *)malloc(sizeof(node));
	newnode->val=a;
	if(current==NULL)
	{
		newnode->next=newnode;
		*head=newnode;
	}
	else if(current->val >=a)
	{
		while(current->next != *head)
            current = current->next;
        current->next = newnode;
        newnode->next = *head;
        *head= newnode;
	}
	else
	{
		while (current->next!= *head &&
            current->next->val < newnode->val)
        current = current->next;
     
        newnode->next = current->next;
        current->next = newnode;
	}
}
int main()
{
	int n,a;
	cin>>n;
	node *head=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		circular(&head,a);
	}
		node *temp=head;
	do
	{
		cout<<head->val<<" ";
		head=head->next;
	}while(head!=temp);
	return 0;
}
