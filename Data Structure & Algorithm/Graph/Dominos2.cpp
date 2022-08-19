#include<bits/stdc++.h>
using namespace std;

int const N=1000;
vector<int>v[N];
bool visited[N];
int node,edge;
void DFS(int src)
{
    visited[src]=true;
  //  cout<<src<<" ";
    for(int i=0; i<v[src].size(); i++)
    {
        int x=v[src][i];
        if(visited[x]==false)
        {
            DFS(x);
        }
    }
}
int main()
{
    
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {

          int l;
     cin>>node>>edge>>l;
        
     for(int i=0; i<node+1; i++)
     {
        visited[i]=false;
        v[i].clear();
     }
    for(int i=0; i<edge; i++)
    {
        int f,s;
        cin>>f>>s;
        v[f].push_back(s);
        //v[s].push_back(f);

    }
    for(int i=0; i<l; i++)
    {
        int x;
        cin>>x;
         DFS(x);
    }
     
     int count=0;
     for(int i=0; i<node+1; i++)
     {

        if(visited[i]==true)
        {
            count++;
        }
        
     }
     
     cout<<count<<" ";
  
    }
    


}