#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
     *a=*b;
     *b=temp;

}

void rotate_array(int arr[][3],int m,int n)
{
   int arr2[3][3];
   for(int j=0;j<n;j++)
   {
    for(int i=0;i<m;i++)
    {
        arr2[i][j]=arr[j][i];
    }
   } 
   
   
   for(int i=0;i<m;i++)
   {
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(&arr2[i][s],&arr2[i][e]);
        s++;
        e--;
    }
   }
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
        arr[i][j]=arr2[i][j];
    }
    
   }

   
   
}
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Print the original matrix:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rotate_array(arr,3,3);
    cout<<"After rotation the matrix is:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}