#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;

    if(left<n && arr[largest] < arr[left])
    largest=left;

    if(right<n && arr[largest]<arr[right])
    largest=right;
    
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);
    
    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);

        heapify(arr,i,0);

    }

}
int main()
{
    int arr[6]={4,11,8,9,3,6};
    heapsort(arr,6);
    cout<<"The sorted array:"<<endl;
    for(int i=0;i<6;i++)
    {
      cout<<arr[i]<<" ";
    }
    return 0;
}


