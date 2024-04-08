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
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}
int print(node* &head)
{
    node* temp=head;
    int count=0;
    cout<<"The single linked list is:";
    while(temp!=NULL)
    {
        
        count++;
        cout<<temp->data<<"->";
        temp=temp->next;
       
        
    }
    return count;

    cout<<endl;
}
node* findmid(node* &head,int count)
{
    node* slow;
    node* fast;
    if(count%2==0)
    {
        slow=head;
         fast=head->next;
    }
    else
    {
        slow=head;
         fast=head;
    }
    while(fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL)
        fast=fast->next;
    }
    return slow;
}
node* reversed(node* &mid)
{
    node*curr=mid;
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
int checkpalindrome(node* &head,node* &mid)
{
    node* temp=head;
    while(mid->next!=NULL)
    {
        if(temp->data!=mid->data)
        return 0;
        else
        {
            temp=temp->next;
            mid=mid->next;
        }

    }
    return 1;
}




int main()
{
    node* node1=new node(1);
    node* head=node1;
    node* tail=node1;
    
    insertatend(tail,2);
    insertatend(tail,3);
    insertatend(tail,3);
    insertatend(tail,2);
    insertatend(tail,1);
    int count=print(head);
    cout<<endl;
    node* mid=findmid(head,count);
    
    node* midium=mid->next;
    midium=reversed(mid->next);
    if(checkpalindrome(head,midium))
    {
        cout<<"Given linked list is palindrome";
    }
    else
    cout<<"Not palindrome";
    
    

   

    return 0;
}
