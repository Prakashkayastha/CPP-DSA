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
node* buildtree(node* root)
{
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);


    if(data == -1)//Here -1 means NULL
    return NULL;

    cout<<"Enter data for inserting in left of:"<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter data for inserting in right of:"<<data<<endl;
    root->right=buildtree(root->right);

    return root;
}
void levelordertraversal(node* &root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node*temp=q.front();
        q.pop();

        if(temp == NULL)
        {
            cout<<endl;//old level complete
            
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
void levelordertraversal(node* &root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node*temp=q.front();
        q.pop();

        if(temp == NULL)
        {
            cout<<endl;//old level complete
            
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
pair<int,int> diameterfast(node*root)
{
    //base case
    if(root == NULL)
    {
        pair<int,int> p=make_pair(0,0);
        return p;
    }
    pair<int,int> left=diameterfast(root->left);
    pair<int,int> right=diameterfast(root->right);

    int op1=left.first;
    int op2=right.first;
    int op3=left.second + right.second +1;

    pair<int,int> ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second)+1;
    return ans;
}

int diameter(node* root)
{
    return diameterfast(root).first;
}



void inorder(node* root)
{
    //base case
    if(root == NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int height(node* &root)
{
    //base case
    if(root == NULL)
    return 0;

    int left= height(root->left);
    int right= height(root->right);

    int ans=max(left,right)+1;
    return ans;

}

void preorder(node* root)
{
    //base case
    if(root==NULL)
    return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*root)
{
    //base case
    if(root==NULL)
    return ;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    // 1 3 7 -1 -1 11-1 -1 5 17 -1 -1 -1
    node* root=NULL;
    root=buildtree(root);
    levelordertraversal(root);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<"Height of binary tree:"<<height(root)<<endl;




    return 0;
}