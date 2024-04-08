#include<iostream>
using namespace std;

int multiply(int x,int res[],int res_size)
{
    int prod=1;
    int carry=0;
    for(int i=0;i<res_size;i++)
    {
         prod=x*res[i]+carry;

        res[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int res[500];
    res[0]=1;
    int res_size=1;

    for(int x=2;x<=num;x++)
    {
         res_size=multiply(x,res,res_size);
    }
    for(int i=res_size-1;i>=0;i--)
    {
        cout<<res[i];
    }


    return 0;
}