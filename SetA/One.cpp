#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
bool checkcards(vector<int> arr)
{
    vector<int>temp;
    for(int i=0;i<arr.size();i++)
    {
        int a=arr[i];
        temp.push_back(a);
    }
    sort(temp.begin(),temp.end());
    auto ip=unique(temp.begin(),temp.begin()+temp.size());
     temp.resize(distance(temp.begin(),ip));
     for(int i=0;i<arr.size();i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     for(int i=0;i<temp.size();i++)
     {
        cout<<temp[i]<<" ";
     }
    if(arr.size() % temp.size() !=0)
    return 0;
    else
    {
        return 1;
    }
}
int main()
{
    vector<int>arr;
    cout<<"Enter array elements:";
    for(int i=0;i<8;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    bool ans=checkcards(arr);
    if(ans)
    {
        cout<<"True";
    }
    else
    cout<<"False";

    return 0;
}
