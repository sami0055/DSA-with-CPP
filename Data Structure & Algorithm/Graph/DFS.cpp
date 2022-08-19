#include <iostream>
int node,edge;
using namespace std;
int graph[20][20];
bool visited[20];
void AdjacentNode(int n)
{
    for(int i=0; i<node; i++)
    {
       if(graph[n][i]==1)
       {
           cout<<n<<"->"<<i<<" "<<endl;
       }
    }
}
void DFS(int src)
{
    //preorder
    cout<<src<<" ";
    visited[src]=true;
    for(int i=0; i<node; i++)
    {
        if(graph[src][i] ==1)
        {
            if(visited[i]==false)
            {
                DFS(i);
            }

        }
    }
}

int main()
{

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    cin>>node>>edge;
    for(int i=0; i<edge; i++)
    {
        int n,m;
        cin>>n>>m;
        graph[n][m]=1;
        graph[m][n]=1;
    }
    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

    AdjacentNode(2);
    cout<<"Print Nodes "<<endl;
    DFS(0);
    return 0;
}
