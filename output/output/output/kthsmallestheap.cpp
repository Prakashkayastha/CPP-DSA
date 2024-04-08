#include<iostream>
using namespace std;
#include<queue>
class kthsmall
{
    int arr[10];
    int size;
    public:
    void assign(int a[],int n)
    {
        size=n;
        for(int i=0;i<n;i++)
        {
            arr[i]=a[i];
        }

    }
    int kthsmallest(int k)
    {
    priority_queue<int>pq;

    //step-1
    for(int i=0;i<k;i++)
    {
        pq.push(arr[i]);
    }

    //step-2
    for(int i=k;i<=size;i++)
    {
        if(arr[i] < pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    //ans=pq.top();
    int ans=pq.top();
    return ans;
    }


};
int main()
{
    kthsmall k;
    int arr[5]={7,10,4,20,15};
    k.assign(arr,5);
    cout<<"The kth smallest number in the array is:"<<k.kthsmallest(3);




    return 0;
}