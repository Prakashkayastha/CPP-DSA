#include<iostream>
using namespace std;
#include<stack>
void insertatbottom(stack<int>&s,int x)
{
    //base case
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int num=s.top();
    s.pop();

    //recursive call
    insertatbottom(s,x);
    s.push(num);


}
void reverse(stack<int>&s)
{
    //base case
    if(s.empty())
    return ;


    int num=s.top();
    s.pop();

    //recursive call
    reverse(s);
    insertatbottom(s,num);
}


int main()
{
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    reverse(s);
    while(!s.empty())
    {
        int a=s.top();
        cout<<a<<endl;
        s.pop();
    }




    return 0;
}