#include<iostream>
using namespace std;
#include<stack>
void sortedinsert(stack<int>&s,int x)
{
    //base case
    if(s.empty()||(!s.empty() && s.top()< x))
    {
        s.push(x);
        return ;
    }
    int num=s.top();
    s.pop();

    //recursive call
    sortedinsert(s,x);
    s.push(num);

}
void sort(stack<int>&s)
{
    //base case
    if(s.empty())
    return ;

    int num=s.top();
    s.pop();

    //recursive call
    sort(s);
    sortedinsert(s,num);
}

int main()
{
    stack<int>s;
    s.push(3);
    s.push(2);
    s.push(1);
    s.push(5);
    sort(s);
    while(!s.empty())
    {
        int a=s.top();
        cout<<a<<endl;
        s.pop();
    }



    return 0;
}