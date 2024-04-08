#include<iostream>
using namespace std;
#include<map>
class node
{
    public:
    int data;
    node* next;
    node* arbit;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->arbit=NULL;
    }



};
void print(node* head)
{
    
    while (head != NULL)
    {
        cout << head->data << "("<< head->arbit->data << ")";
        cout<<"->";
        head = head->next;
    }
    cout << endl;
}
node* clonelinkedlist(node *head)
{
    map <node*,node*>mp;
    node *temp,*nhead;
    // Duplicate of the first node
    temp = head;
    nhead = new node(temp->data);
    mp[temp] = nhead;
    // Loop to create duplicates of nodes
    // with only next pointer
    while (temp->next != NULL)
    {
        nhead->next= new node(temp->next->data);
        temp = temp->next;
        nhead = nhead->next;
        mp[temp] = nhead;
    }
    temp=head;
    while (temp != NULL)
    {
        mp[temp]->arbit = mp[temp->arbit];
        temp = temp->next;
    }
   
    // Return the head of the clone
    return mp[head];
}


int main()
{
    node* node1=new node(1);
    node* head=node1;
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);
   
    head->arbit = head->next->next;
    head->next->arbit = head;
    head->next->next->arbit= head->next->next->next->next;
    head->next->next->next->arbit = head->next->next;
    head->next->next->next->next->arbit = head->next;
    print(head);
    node* sol = clonelinkedlist(head);
    cout<<"The clone linked list is:"<<endl;
    print(sol);



    return 0;
}