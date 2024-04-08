#include<iostream>
using namespace std;
#include<queue>
#include<stack>
void firstkreverse(queue<int>&q,int n,int k)
{
    stack<int>s;
    for(int i=0;i<k;i++)
    {
        int val=q.front();
        q.pop();
        s.push(val);
    }
    while(!s.empty())
    {
        int val=s.top();
        s.pop();
        q.push(val);
    }
    int t=q.size()-k;

    while(t--)
    {
        int val=q.front();
        q.pop();
        q.push(val);
    }
    while(!q.empty())
    {
        int val =q.front();
        q.pop();
        cout<<val<<" ";
    }
}

int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    firstkreverse(q,5,3);
}