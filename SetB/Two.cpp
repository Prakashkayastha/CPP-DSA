#include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    vector<string>v={"Marry","John","Emma"};
    vector<string>ans;
    vector<int>a={180,165,170};
    vector<int>temp;
    for(int i=0;i<a.size();i++)
    {
        int t=a[i];
        temp.push_back(t);
    }
    sort(temp.begin(),temp.end(),greater<int>());
    for(int i=0;i<temp.size();i++)
    {
        for(int j=0;j<a.size();j++)
        {
            if(temp[i] == a[j])
            {
                ans.push_back(v[j]);
                break;
            }
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
   

    return 0;
}