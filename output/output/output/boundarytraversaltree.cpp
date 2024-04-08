#include<iostream>
#include<vector>
using namespace std;
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
class solution {
public:
    void traverseLeft(node* root, vector<int> &ans) {
        //base case
        if( (root == NULL) || (root->left == NULL && root->right == NULL) )
            return ;
            
        ans.push_back(root->data);
        if(root->left)
            traverseLeft(root->left, ans);
        else
            traverseLeft(root->right, ans);
            
    }
    
    void traverseLeaf(node* root, vector<int> &ans) {
        //base case
        if(root == NULL)
            return ;
            
        if(root->left == NULL && root->right == NULL) {
            ans.push_back(root->data);
            return;
        }
        
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
        
    }
    
    void traverseRight(node* root, vector<int> &ans) {
        //base case
        if( (root == NULL) || (root->left == NULL && root->right == NULL) )
            return ;
        
        if(root->right)
            traverseRight(root->right, ans);
        else
            traverseRight(root->left, ans);
            
        //wapas aagye
        ans.push_back(root->data);
            
    }
    
    vector <int> boundary(node *root)
    {
        vector<int> ans;
        if(root == NULL)
            return ans;
            
        ans.push_back(root->data);
        
        //left part print/store
        traverseLeft(root->left, ans);
        
        //traverse Leaf Nodes
        
        //left subtree
        traverseLeaf(root->left, ans);
        //right subtree
        traverseLeaf(root->right, ans);
        
        //traverse right part
        traverseRight(root->right, ans);
        
        return ans;
        
        
    }
};

int main()
{
    //1 2 -1 -1 3 4 -1 -1 5 -1 -1
    node* root=NULL;
    root=buildtree(root);
    solution obj;
    vector<int> ans=obj.boundary(root);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    
      




    return 0;
}