#include<bits/stdc++.h>
using namespace std;
int const N=1000;
int graph[N][N];
int node,edge;
bool visited[N];
void initialize()
{
    for(int i=0; i<node+1; i++)
    {
        visited[i]=false;
    }
    for(int i=0; i<node+1; i++)
    {
        for(int j=0; j<node+1; j++)
        {
            graph[i][j]=0;
        }
    }
}

void dfs(int src)
{
    visited[src]=true;
    for(int i=0; i<node+1; i++)
    {
        if(visited[i]==false && graph[src][i]==1)
        {
            dfs(i);
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
        initialize();
        int l;
        cin>>node>>edge>>l;
        for(int i=0; i<edge; i++)
        {
            int f,s;
            cin>>f>>s;
            graph[f][s]=1;
        }

        for(int i=0; i<l; i++)
        {
            int x;
            cin>>x;
            dfs(x);
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