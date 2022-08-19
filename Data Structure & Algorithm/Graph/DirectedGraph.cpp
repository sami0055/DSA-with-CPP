#include<bits/stdc++.h>
using namespace std;
int const N=20;
int node,edge;
int graph[N][N];
int start[N],finish[N];
bool visited[N];
int t=1;
void BFS(int src)
{
  queue<int> q;
  visited[src]=true;
  q.push(src);
  while(!q.empty())
  {
    int x=q.front();
    q.pop();
    cout<<x<<" ";
    for(int i=0; i<node; i++)
    {
        if(graph[src][i]==1 && visited[i]==false)
        {
            q.push(i);
            visited[i]=true;
        }
    }

  }

}

void DFS(int src)
{
  start[src]=t;
  ++t;
 // cout<<src<<" ";
  visited[src]=true;
  for(int i=0; i<node; i++)
  {
    if(visited[i]==false && graph[src][i]==1)
    {
        DFS(i);
    }
  }
  finish[src]=t;
  ++t;
}
int main()
{

     freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    
    cin>>node>>edge;
    for(int i=0; i<edge; i++)
    {
       int f,s;
       cin>>f>>s;
       graph[f][s]=1;
    }
    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    DFS(2);

    for(int i=0; i<node; i++)
    {
        cout<<i<<" start "<<start[i]<<", finish "<<finish[i]<<endl;
    }




}