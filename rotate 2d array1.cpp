#include<iostream>
using namespace std;
void rotate_array(int arr[],int n,int k)
{
    int temp[4];
    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n]=arr[i];

    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[4]={1,2,3,4};
    rotate_array(arr,4,2);


    return 0;
}