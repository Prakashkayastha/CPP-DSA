#include<iostream>
#include<map>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }



};

void insertatlast(node* &tail,int d)
{
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}
void print(node* &head)
{
    node* temp=head;
    cout<<"The single linked list is:";
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
node* reversed(node* &head,int k)
{
    node* curr=head;
    node*prev=NULL;
    node* next=NULL;
    int count=0;
    while(curr!=NULL&&count<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL)
     head->next=reversed(next,k);
     return prev;

}


int main()
{
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    insertatlast(tail,12);
    insertatlast(tail,14);
    insertatlast(tail,16);
    insertatlast(tail,18);
    insertatlast(tail,20);
    head= reversed(head,3);
    print(head);
    








    return 0;
}