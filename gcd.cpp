#include<iostream>
using namespace std;
int findgcd(int m,int n)
{
    if(m==0)
    return n;
    if(n==0)
    return m;

    while(n!=m)
    {
        if(m>n)
        m=m-n;
        else
        n=n-m;
    }
    return n;

}
int main()
{
    int a,b;
    cout<<"Enter the values:";
    cin>>a>>b;
    int ans=findgcd(a,b);
    cout<<ans;


    return 0;
}