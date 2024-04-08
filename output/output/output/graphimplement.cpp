#include<iostream>
using namespace std;
#include<list>
#include<unordered_map>
class graph
{
    public:
    unordered_map<int,list<int>>adj;

    void addedge(int u,int v,bool direction)
    {
        //direction=0 -> undirected graph
         //direction=1-> directed graph


         //create an edge from u to v
         adj[u].push_back(v);

         if(direction == 0)
         {
            adj[v].push_back(u);
         }
    }

    void printadjlist()
    {
        for(auto i:adj)
        {
            cout<< i.first << "->";
            for(auto j:i.second)
            {
                cout<< j <<", ";
            }
            cout<<endl;
        }
    }

};

int main()
{
    int n;
    cout<<"Enter the number of nodes:";
    cin>>n;

    int m;
    cout<<"Enter the number of edges:";
    cin>>m;
    graph g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        //Graph creating an undirected graph
        g.addedge(u,v,0);
    }
    //printing graph
    g.printadjlist();


    return 0;
}