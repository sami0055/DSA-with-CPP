#include<iostream>
using namespace std;
int node,edges;
int const N=20;
int graph[N][N];
bool visited[N];
int dis[N];
int parent[N];
#include<bits/stdc++.h>

void BFS(int src)
{
    queue<int>pendingVertices;
    dis[src]=0;
    parent[src]=-1;
    pendingVertices.push(src);
    visited[src]=true;
    while(!pendingVertices.empty())
    {
       int x=pendingVertices.front();
       pendingVertices.pop();
     
       for(int i=0; i<node; i++)
       {
        if(graph[x][i]==1 && visited[i]==false)
        {
            pendingVertices.push(i);
            parent[i]=x;
            dis[i]=dis[x]+1;
            visited[i]=true;

        }
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
    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    BFS(3);

    cout<<"Dis of 6 = "<<dis[6]<<endl;
    cout<<"Parent of 6 = "<<parent[6]<<endl;




}