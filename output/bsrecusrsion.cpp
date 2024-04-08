#include<iostream>
using namespace std;
bool linearsearch(int arr[],int n,int k)
{
    if(n==0)
    return 0;
     if(arr[0]==k)
   return 1;
   else
   {
    bool rest=linearsearch(arr+1,n-1,k);
    return rest;
   }
    
    
}

int main()
{
    int arr[5]={2,4,12,8,9};
    int size=5;
    int key=12;

    bool ans=linearsearch(arr,size,key);
    cout<<ans;

    return 0;
}