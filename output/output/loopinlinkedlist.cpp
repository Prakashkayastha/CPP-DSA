#include<iostream>
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
void insertatend(node* &tail,int d)
{
    node*temp=new node(d);
    tail->next=temp;
    tail=temp;
}
void print(node* &head)
{
    node*temp=head;
    cout<<"The single linked list is:";
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
node* floyddetectloop(node* &head)
{
    if(head==NULL)
    return NULL;
    node* slow=head;
    node* fast=head;


    while(slow!=NULL&&fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        fast=fast->next;

        slow=slow->next;
        if(slow==fast)
        return slow;
    }
    return NULL;
}
node* getstartingnode(node* head)
{
    if(head==NULL)
    return NULL;
    node*slow=head;
   
    node* intersection=floyddetectloop(head);
     if(intersection==NULL)
    return NULL;
    while(slow!=intersection)
    {
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
node* removeloop(node* head)
{
    if(head==NULL)
    return NULL;
    node* startofloop=getstartingnode(head);
    node* temp=startofloop;
    while(temp->next!=startofloop)
    temp=temp->next;
    temp->next=NULL;
    return head;
}
int main()
{
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    insertatend(tail,12);
    insertatend(tail,14);
    insertatend(tail,16);
    insertatend(tail,18);
    insertatend(tail,20);
    tail->next=head->next;
    //print(head);
   node*loop=getstartingnode(head);
   cout<<"Loop present at:"<<loop->data<<endl;
   //head=removeloop(head);
   print(head);
    
}