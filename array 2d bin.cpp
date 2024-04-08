#include<iostream>
using namespace std;
int binarysearch(int mat[][10],int m,int n,int target)
{
    int s=0;
    int e=(m*n)-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        int element=mat[mid/n][mid%n];
        if(element==target)
        return 1;
        else if(target>element)
        s=mid+1;
        else 
        e=mid-1;
        mid=s+(e-s)/2;
    }

    return 0;

}
int main()
{
    int mat[10][10]={{1,2,3},{4,5,6},{7,8,9}};
    // cout<<"Enter row size:";
    // cin>>m;
    // cout<<"Enter column size:";
    // cin>>n;

    if(binarysearch(mat,3,3,10))
    cout<<"Search found";
    else
    cout<<"Not found";
    return 0;
}