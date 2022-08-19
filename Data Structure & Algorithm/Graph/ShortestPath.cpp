#include<iostream>
using namespace std;
int node,edges;
int const N=20;
int graph[N][N];
bool visited[N];
int count;
#include<bits/stdc++.h>
int parent[N];
void BFS(int src,int s,int d)
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
       
        if(visited[i]==false && graph[vertex][i]==1)
        {
            pendingVertices.push(i);
            parent[i]=vertex;
            visited[i]=true;

        }

       }
    }

    int currentNode=d;
    vector<int> ans;
    ans.push_back(d);
    while(currentNode!=s)
    {
        currentNode=parent[currentNode];
        ans.push_back(currentNode);
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;  i<ans.size(); i++)
    {
        cout<<ans[i]<<" "; 
    }
    


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