#include<bits/stdc++.h>
using namespace std;
const int N=20;
vector<int>graph[N];
int node,edge;
bool visited[N];
void DFS(int src)
{
    // take action on vertex after entering the vertex
    cout<<src<<" ";
    visited[src]=true;
    for(int i=0; i<graph[src].size(); i++)
    {
        //take action on child before
        // entering the child node
        int next=graph[src][i];
        if(visited[next]==false)
        {
            DFS(next);
            // take action on child
            //after exiting child node
        }
    }
    // take action on vertex before
    // exting the vertex
}
int main()
{
   
   freopen("in.txt","r",stdin);
   freopen("out.txt","w",stdout);
  cin>>node>>edge;
  for(int i=0; i<edge; i++)
  {
    int u,v;
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
 
  int count=0;
  for(int i=1; i<=node; i++)
  {
    if(visited[i]==false)
    {
        DFS(i);
        count++;
    }
  }
  cout<<endl;
  cout<<"Nuber of connected com is "<<count<<endl;

}