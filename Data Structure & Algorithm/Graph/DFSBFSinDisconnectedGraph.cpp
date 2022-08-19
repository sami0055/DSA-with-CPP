#include<iostream>
using namespace std;
int const N=20;
int graph[N][N];
bool visited[N];

int node,egdes;
#include<queue>
void PrintDFS(int src)
{
    cout<<src<<" ";
    visited[src]=true;
    for(int i=0; i<node; i++)
    {
        if(graph[src][i]==1 && visited[i]==false)
        {
            PrintDFS(i);
        }
    }
}
void PrintBFS(int src)
{
  queue<int> pendingVertices;
  pendingVertices.push(src);
  visited[src]=true;
  while(!pendingVertices.empty())
  {
    int v=pendingVertices.front();
    pendingVertices.pop();
    cout<<v<<" ";
    for(int i=0; i<node; i++)
    {
        if(graph[v][i]==1 && visited[i]==false)
        {
            pendingVertices.push(i);
            visited[i]=true;
        }
    }
  }
}
void DFSdisconnected()
{
   for(int i=0; i<node; i++)
   {
    if(visited[i]==false)
    {
        PrintDFS(i);
    }

   }
}
void BFSdisconnected()
{
    for(int i=0; i<node; i++)
    {
        if(visited[i]==false)
        {
            PrintBFS(i);
        }
    }
}
int main()
{

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    cin>>node>>egdes;
   for(int i=0; i<egdes; i++) 
   {
    int f,s;
    cin>>f>>s;
    graph[f][s]=1;
    graph[s][f]=1;
   }
   DFSdisconnected();
   //BFSdisconnected();

  
}