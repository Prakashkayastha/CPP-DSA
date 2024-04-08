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
void insertattail(node* &head,node* &tail, int d)
{
    node* temp=new node(d);
    if(head==NULL)
    {
        head=temp;
        tail=temp;
        return ;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
}
node* add(node* first,node* second)
{
    int carry=0;
    node* anshead=NULL;
    node* anstail=NULL;
    while(first!=NULL||second!=NULL||carry!=0)
    {
        int val1=0;
        if(first!=NULL)
        val1=first->data;
        int val2=0;
        if(second!=NULL)
        val2=second->data;

        int sum=carry+val1+val2;
        int digit=sum%10;
        insertattail(anshead,anstail,digit);
        carry=sum/10;
        if(first!=NULL)
        first=first->next;
        if(second!=NULL)
        second=second->next;
    }
    return anshead;
}
node* reversed(node* head)
{
    node*curr=head;
    node* prev=NULL;
    node* next;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
void insertatend(node* &tail,int d)
{
    node* temp=new node(d);
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


int main()
{
    node* node1=new node(4);
    node*first=node1;
    node* tail1=node1;
    insertatend(tail1,5);
    node* node2=new node(3);
    node*second=node2;
    node* tail2=node2;
    insertatend(tail2,4);
    insertatend(tail2,5);
    first=reversed(first);
    second=reversed(second);
    node* ans=add(first,second);
    ans=reversed(ans);
    print(ans);




    return 0;
}