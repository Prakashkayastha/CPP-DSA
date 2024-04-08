#include <iostream>
using namespace std;
#include <unordered_set>
#include<bits/stdc++.h>
int main() {
   vector<int>store;
   string s="words with 987";
     for(int i=0;i<s.length();i++)
        {
            int x=s[i] - '0';
            if(x>=1 && x<=9)
            store.push_back(x);
        }
        for(int i=0;i<store.size();i++)
        {
            cout<<store[i];
        }
    return 0;
}
