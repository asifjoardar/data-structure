#include<bits/stdc++.h>
using namespace std;
struct asif{
    int data;
    asif *link;
};
asif *head;
void print()
{
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->link;
    }
}
void insert(int n)
{
    asif* tem=new asif();
    tem->data=n;
    tem->link=head;
    head=tem;
}
main()
{
    head=NULL;
    insert(1);
    insert(2);
    insert(3);
    print();
}
