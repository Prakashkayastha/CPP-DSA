#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }



};
void insertatend(node* &tail,int d)
{
    node *temp=new node(d);
    tail->next=temp;
    tail=temp;
}
void print(node*head)
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
void selectionsort(node* head)
{
    node* temp=head;
    while(temp)
    {
        node* min=temp;
        node* r=temp->next;

        while(r)
        {
            if(min->data>r->data)
            min=r;
            r=r->next;

        }
        int x=temp->data;
        temp->data=min->data;
        min->data=x;
        temp=temp->next;
    }
}
int main()
{
    node* node1=new node(10);
    node*head=node1;
    node*tail=node1;
    insertatend(tail,4);
    insertatend(tail,7);
    insertatend(tail,9);
    insertatend(tail,1);
    insertatend(tail,2);
    print(head);
   
    selectionsort(head);
    print(head);




    return 0;
}