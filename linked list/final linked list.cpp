#include<bits/stdc++.h>
#define ll long long
using namespace std;
class asif{
public:
	int data;
	asif *link;
};asif *head;
void print()
{
	asif *tem=new asif();
	tem=head;
	while(tem!=NULL)
	{
		cout<<tem->data<<endl;
		tem=tem->link;
	}
}
void insert(int n)
{
	asif* tem=new asif();
	tem->data=n;
	tem->link=NULL;
	if(head==NULL)
	{
		head=tem;
	}
	else
	{
		asif* t=new asif();
		t=head;
		while(t->link!=NULL)
		{
			t=t->link;
		}
		t->link=tem;
	}
}
void insertfirst(int n)
{
	asif *tem=new asif();
	tem->data=n;
	tem->link=head;
	head=tem;
}
void deleten(int n)
{
	if(n==1){
	asif* first=head;
		head=first->link;
		free(first);
	}
	else{
		asif *tem;
		tem=head;
		for(int i=1;i<=n-2;i++)
		{
			tem=tem->link;
		}
		asif* tem1=tem->link;
		tem->link=tem1->link;
		free(tem1);
	}
}
main()
{
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif*/
	head=NULL;
	int n,i,x;
	char c;
	cout<<"enter the size of array\n";
	cin>>n;
	cout<<"enter values:\n";
	for(i=0;i<n;i++){
		cin>>x;
		insert(x);
	}
	cout<<"elemnts of your array is :\n";
	print();
	cout<<"do u want to insert a element in front of array?(y/n)\n";
	cin>>c;
	if(c=='y')
	{
		cout<<"enter ur desire element:\n";
		cin>>x;
		insertfirst(x);
		cout<<"after change ur elements of array is:\n";
		print();
		goto joardar;
	}
	else
	{
		goto joardar;
	}
	joardar:
	cout<<"do you want to delete any elements from linked list:(y/n)\n";
		cin>>c;
		if(c=='y')
		{
			cout<<"enter your node to delete:\n";
			cin>>x;
			deleten(x);
			cout<<"after delete your linked list look like:\n";
			print();
		}
		else
			return 0;
}
