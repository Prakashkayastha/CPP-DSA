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



void inorder(node* root,vector<int> &in)
{
    if(root ==NULL)
    return ;

    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}

vector<int> mergearray(vector<int> &a,vector<int> &b)
{
    vector<int> ans(a.size() + b.size());
    int i=0,j=0,k=0;

    while(i<a.size() && j<b.size())
    {
        if(a[i] < b[j])
        ans[k++]=a[i++];
        else
        ans[k++]=b[j++];

        
    }
        while(i<a.size())
        ans[k++]=a[i++];
        while(j<b.size())
        ans[k++]=b[j++];

        return ans;
}
node* inordertobst(int s,int e,vector<int> &in)
{
    //base case
    if(s>e)
    return NULL;

    int mid=(s+e)/2;
    node* root=new node(in[mid]);
    root->left=inordertobst(s,mid-1,in);
    root->right=inordertobst(mid+1,e,in);
    return root;
}
node* mergebst(node* root1,node* root2)
{
    //Step-1 store inorder
    vector<int> bst1,bst2;
    inorder(root1,bst1);
    inorder(root2,bst2);
    //step-2 merge both sorted arrays
    vector<int> mergedarray=mergearray(bst1,bst2);
    //step-3 use merged inorder array to build bst
    int s=0,e=mergedarray.size()-1;
    return inordertobst(s,e,mergedarray);

}

int main()
{
    node* root1=NULL;
    node* root2=NULL;
    vector<int>x;
    
    cout<<"Enter data to create 1st BST:";
    takeinput(root1);
    levelordertraversal(root1);
    cout<<endl<<endl;
    cout<<"Enter data to create 2nd BST:";
    takeinput(root2);
    levelordertraversal(root2);

     node* root= mergebst(root1,root2);
     cout<<endl;
     levelordertraversal(root);

   
    
    
    


    return 0;

}
   