#include<iostream>
using namespace std;
#include<queue>
#include<vector>
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

void buildfromlevelorder(node* &root)
{
    queue<node*>q;
    cout<<"Enter the data for root:";
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        cout<<"Enter the left data for :"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1)
        {
            temp->left=new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter the right data for :"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1)
        {
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
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
void traverseleft(node* root,vector<int> &ans)
{
    //base case
    if((root == NULL) || (root->left ==NULL && root->right == NULL))
    return ;

    ans.push_back(root->data);
    if(root->left)
    traverseleft(root->left,ans);
    else
    traverseleft(root->right,ans);
}
void traverseleaf(node* root,vector<int> &ans)
{
    if(root == NULL)
    return ;

    if(root->left ==NULL && root->right == NULL)
    ans.push_back(root->data);
    traverseleaf(root->left,ans);
    traverseleaf(root->right,ans);
}
void traverseright(node* root,vector<int>&ans)
{
    if((root == NULL)  || (root->left == NULL && root->right == NULL))
    return ;

    if(root->right)
    traverseright(root->right,ans);
    else
    traverseright(root->left,ans);
    ans.push_back(root->data);
}
vector<int> boundarytraversal(node* &root)
{
    vector<int>ans;
    //base case
    if(root ==NULL)
    return ans;
    ans.push_back(root->data);
    //store the left part
    traverseleft(root->left,ans);
    //store the leaf nodes
    // 1. left subtree
    traverseleaf(root->left,ans);
    //2.right subtree
    traverseleaf(root->right,ans);

    //right part store
    traverseright(root->right,ans);

}
int main()
{
    //1 2 4 3 5 -1 7 -1 -1 6 8 -1 9 -1 -1 -1 -1 10 11 -1 -1 -1 -1
    node* root=NULL;
    buildfromlevelorder(root);
    levelordertraversal(root);
    vector<int>ans;
    ans=boundarytraversal(root);
    cout<<endl<<"Boundary order traversal are:"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


    return 0;
}