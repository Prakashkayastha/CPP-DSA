#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    vector<int>num={2,1,5};
    int sum=0,k;
    vector<int>temp;
    cout<<"Enter k value:";
    cin>>k;
    for(int i=0;i<num.size();i++)
    {
        int a=num[i];
        temp.push_back(a);
    }
    reverse(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++)
    {
        sum += temp[i]*pow(10,i);
    }
    sum += k;
    vector<int>ans;
    while(sum>0)
    {
        int rem=sum%10;
        ans.push_back(rem);
        sum /= 10;
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}