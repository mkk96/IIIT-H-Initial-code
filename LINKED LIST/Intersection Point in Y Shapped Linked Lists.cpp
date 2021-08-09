#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *next;
};
bool findY(node *head1,node *head2)
{
	int count1=0,count2=0;
	node *temp=head1;
	while(temp!=NULL)
	{
		temp=temp->next;
		count1++;
	}
	temp=head2;
	while(temp!=NULL)
	{
		temp=temp->next;
		count2++;
	}
	int count=abs(count1-count2);
	node *ptr1=head1;
	node *ptr2=head2;
	if(count1>=count2)
	{
		while(count!=0)
		{
			ptr1=ptr1->next;
			count--;
		}
	}
	else
	{
		while(count!=0)
		{
			ptr2=ptr2->next;
			count--;
		}
	}
	while(ptr1!=NULL&&ptr2!=NULL)
	{
		if(ptr1==ptr2)
			return true;
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	return false;
}
int main()
{
	int n,a;
	cin>>n;
	node *head1=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		node *temp=(node *)malloc(sizeof(node));
		temp->val=a;
		temp->next=head1;
		head1=temp;
	}
	node *head2=NULL;
	node *temp=(node *)malloc(sizeof(node));
	temp->val=10;
	temp->next=head1->next->next->next;
	head2=temp;
	if(findY(head1,head2))
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	return 0;
}
