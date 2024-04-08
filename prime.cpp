#include<iostream>
using namespace std;
int check_prime(int length)
{
    int count=0;
    int arr[40];
    for(int i=0;i<length;i++)
    {
        arr[i]=1;
    }
    arr[0]=arr[1]=0;
    for(int i=2;i<length;i++)
    {
        if(arr[i])
        {
            count++;
            for(int j=2*i;j<length;j=j+i)
            {
                arr[j]=0;
                
            }
        }

    }
    return count;
    
}
int main()
{
    int length=40;
    int ans=check_prime(length);
    cout<<ans;
}