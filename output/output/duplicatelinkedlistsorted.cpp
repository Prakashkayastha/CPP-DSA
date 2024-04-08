#include<iostream>
using namespace std;


class node
{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }



};
void removeduplicates(node* &head)
{
    node *ptr1,*ptr2,*dup;
    ptr1=head;
     /* Pick elements one by one */
    while(ptr1!=NULL&&ptr1->next!=NULL)
    {
        ptr2=ptr1;
    /* Compare the picked element with rest
    of the elements */

        while(ptr2->next!=NULL)
        {
            /* If duplicate then delete it */
            if(ptr1->data==ptr2->next->data)
            {
                dup=ptr2->next;
                delete(dup);
                 ptr2->next=ptr2->next->next;
            }
            else
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }

}

void insertatend(node* &tail,int d)
{
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}
void print(node* head)
{
    node* temp=head;
    cout<<"The single linked list is:"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* node1=new node(12);
    node* head=node1;
    node* tail=node1;
    insertatend(tail,11);
    insertatend(tail,12);
    insertatend(tail,21);
    insertatend(tail,41);
    insertatend(tail,43);
    insertatend(tail,21);
    print(head);
    //Remove duplicates from the sorted linked list
    removeduplicates(head);
    cout<<"After deletion of duplicates:"<<endl;
    print(head);  


    return 0;
}