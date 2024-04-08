#include<iostream>
using namespace std;
#include<bits/stdc++.h>
bool check(vector<int>v1,vector<int>v2)
{
    int flag1=1,flag2=1;
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]>=v1[i+1] && i+1 < v1.size())
        {
            flag1=0;
            break;
        }
    }

    for(int i=0;i<v2.size();i++)
    {
        if(v2[i]<=v2[i+1] && i+1 < v2.size())
        {
            flag2=0;
            break;
        }
    }
    cout<<flag1<<" "<<flag2<<" ";
    if(flag1 && flag2)
    return 1;
    else 
    return 0;
}
int main()
{
    vector<int>num={2,1};
    vector<int>v1;
    vector<int>v2;
    int index;
    if(num.size()<3)
    cout<<"False";
    else
    {
      
      for(int i=0;i<num.size();i++)
    {
        int j=i+1;
        if(num[i] >= num[j])
        {
            index=i;
            break;
        }
    }
    for(int t=0;t<=index;t++)
    {
        int a=num[t];
        v1.push_back(a);
    }
    for(int t=index;t<num.size();t++)
    {
        int a=num[t];
        v2.push_back(a);
    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
   if(check(v1,v2))
   cout<<"True";
   else
   cout<<"False";

    }
    

    return 0;
}