#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    vector<int>num={1,4,5,2,3,9,8,7};
    int k;
    cout<<"Enter the distinct maximum number:";
    cin>>k;
    sort(num.begin(),num.end(),greater<int>());
    cout<<num[k-1];


    return 0;
}