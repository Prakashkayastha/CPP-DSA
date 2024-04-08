#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key)
        e=mid-1;
        else
        s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
           s=mid+1;
        }
        else if(arr[mid]>key)
        e=mid-1;
        else
        s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[7]={1,2,3,3,3,4,5};
    int index1=firstocc(arr,7,3);
    int index2=lastocc(arr,7,3);
    cout<<index1<<" ";
    cout<<index2<<endl;



    return 0;
}