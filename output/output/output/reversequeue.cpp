#include<iostream>
using namespace std;
#include<stack>
#include<queue>

int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    stack<int>s;
    
    while(!q.empty())
    {
        int element=q.front();
        q.pop();
        s.push(element);
    }


    while(!s.empty())
    {
        int element=s.top();
        s.pop();
        q.push(element);
    }
    cout<<"The elements are:\n";
    while(!q.empty())
    {
        int element=q.front();
        q.pop();
        cout<<element<<" ";
    }
    

}