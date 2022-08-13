#include<iostream>
using namespace std;
int node,edges;
int const N=20;
int graph[N][N];
bool visited[N];

#include<bits/stdc++.h>

void BFS(int src)
{
    queue<int>pendingVertices;
    
    pendingVertices.push(src);
    visited[src]=true;
    while(!pendingVertices.empty())
    {
       int vertex=pendingVertices.front();
       pendingVertices.pop();
       cout<<vertex<<endl;
       for(int i=0; i<node; i++)
       {
        if(graph[vertex][i]==1 && visited[i]==false)
        {
            pendingVertices.push(i);
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
    BFS(0);


}