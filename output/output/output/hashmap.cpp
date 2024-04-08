#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    //Creation
    unordered_map<string,int>m;

    //Insertion

    //1
    pair<string,int> p= make_pair("prakash",3);
    m.insert(p);
    //2
    pair<string,int> pair2("papu",2);
    m.insert(pair2);
    //3
    m["mera"]=1;
    cout<<m.at("prakash")<<endl;
    cout<<m["papu"]<<endl;
    cout<<m["unknown"]<<endl;
    cout<<m.at("unknown")<<endl;
    //For size

    cout<<m.size()<<endl;
    //To check presence
    cout<<m.count("prakash")<<endl;
    //cout<<m.erase("prakash")<<endl;
    cout<<m.count("prakash")<<endl;
    //iterartor
    unordered_map<string,int> :: iterator it=m.begin();

    while(it != m.end())
    {
        cout<< it->first << " " << it->second <<endl;
        it++;
    }




    return 0;
}