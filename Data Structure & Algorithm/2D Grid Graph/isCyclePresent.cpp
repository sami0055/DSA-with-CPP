#include<iostream>
using namespace std;
int node,edges;
int const N=20;
int graph[N][N];
bool visited[N];
int count;
#include<bits/stdc++.h>
int parent[N];
bool BFS(int src)
{
    queue<int>pendingVertices;
    
    pendingVertices.push(src);
    visited[src]=true;
    parent[src]=-1;
    while(!pendingVertices.empty())
    {
       int vertex=pendingVertices.front();
       pendingVertices.pop();
      // cout<<vertex<<endl;
       for(int i=0; i<node; i++)
       {
        if(i!=parent[vertex] && visited[i]==true && graph[vertex][i]==1 )
        {
          return true;
        }
        else if(visited[i]==false && graph[vertex][i]==1)
        {
            pendingVertices.push(i);
            parent[i]=vertex;
            visited[i]=true;

        }

       }
    }
    return false;


}
void initialize()
{
    for(int i=0; i<node; i++)
    {
        parent[i]=0;
        visited[i]=false;
    }
    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node+1; j++)
        {
            graph[i][j]=0;
        }
    }
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    cin>>node>>edges;
    for(int i=0; i<edges; i++)
    {
        int f,s;
        cin>>f>>s;
        graph[f][s]=1;
        graph[s][f]=1;
    }
    
    bool b;
    // for(int i=1; i<node+1; i++)
    // {
    //     if(visited[i]==false)
    //     {
    //       b= BFS(i);
    //     }
    // }
    b=BFS(0);
    if(b)
    {
        cout<<"Cycle present "<<endl;

    }
    else{
        cout<<"Cycle not present "<<endl;
    }
    initialize();
    

    


}