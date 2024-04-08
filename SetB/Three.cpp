#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    vector<int>num={1,3,9,2,7};
    int count=0;
    for(int i=0;i<num.size();i++)
    {
        int j=i+1;
        if(num[j]<num[i] && j<num.size())
        {
            count++;
            if(num[j]<num[i-1])
            count++;
        }
    }
   
    if(count >1 || count ==0)
    cout<<"False";
    else
    cout<<"True";

    return 0;
}