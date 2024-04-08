#include<iostream>
using namespace std;
template<class t>
void  sort(t a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

}
template<class t>
void show(t a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[5]={4,1,8,9,3};
    float b[5]={1.2,2.5,1.6,1.9,5.4};
    sort(a,5);
    cout<<"Array elements are:"<<endl;
    show(a,5);
    sort(b,5);
    cout<<"Array elements are:"<<endl;
    show(b,5);


    return 0;
}