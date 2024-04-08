#include<iostream>
using namespace std;
#include<queue>
class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }  
};

node* insertintobst(node* root,int d)
{
    //base case
    if(root==NULL)
    {
        root=new node(d);
        return root;
    }
    if(d > root->data)
    {
        //insert in right part
        root->right=insertintobst(root->right,d);
    }
    else
    {
         //insert in left part
        root->left=insertintobst(root->left,d);
    }
    return root;

}
void takeinput(node* &root)
{
    int data;
    cin>>data;
    while(data!= -1)
    {
       root= insertintobst(root,data);
        cin>>data;

    }
}
void levelordertraversal(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);


    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
}
int searchinbst(node* root,int x)
{
    node* temp=root;
    while(temp!=NULL)
    {
        if(temp->data == x)
        return 1;
        if(temp->data > x)
        temp=temp->left;
        if(temp->data < x)
        temp=temp->right;
    }
    return 0;

}
int solve(node* root,int &i,int k)
{
    if(root ==NULL)
    return -1;
    //L
    int left=solve(root->left,i,k);
    if(left != -1)
    return left;
    //N
    i++;
    if(i == k)
    return root->data;
    //R
    return solve(root->right,i,k);


}

int main()
{
    node* root=NULL;
    int x;
    cout<<"Enter data to create BST:";
    takeinput(root);
    levelordertraversal(root);
    cout<<"Enter the element which you want to check";
    cin>>x;
    if(searchinbst(root,x))
    cout<<"The element is present";
    else
    cout<<"The element is absent";
    int ans=solve(root,i,k);
    cout<<endl;
    cout<<ans;



    return 0;

}
   