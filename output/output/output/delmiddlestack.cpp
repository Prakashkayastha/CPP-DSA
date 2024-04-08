#include<iostream>
using namespace std;
#include<stack>
void solve(stack<int>&s,int cnt,int n)
{
    //base case
    if(cnt==n/2)
    {
        s.pop();
        return;
    }
    int num=s.top();
    s.pop();
    //recursive call
    solve(s,cnt+1,n);
    s.push(num);
}
void deletemiddle(stack<int>&s,int n)
{
    int cnt=0;
    solve(s,cnt,n);
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    deletemiddle(s,5);
    while(!s.empty())
    {
        int a=s.top();
        s.pop();
        cout<<a<<endl;
    }
    

    return 0;

}