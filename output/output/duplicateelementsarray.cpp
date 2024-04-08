#include<iostream>
using namespace std;
void printduplicate(int arr[],int n)
{
    for (int i = 0; i < n; i++) 
    {
        int index = arr[i] % n;
        
       arr[index]=arr[index]+n;
    }
     for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
            cout << i << " ";
    }
    
}

int main()
{
    int arr[]={2,4,6,2,3,5,6,4};
    int n=8;
    
    printduplicate(arr,n);



    return 0;
}