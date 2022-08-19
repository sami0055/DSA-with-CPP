#include<iostream>
#include<queue>
#define size 20
using namespace std;
int graph[size][size] = {0};
int node, edge;
bool visit[size];
int level[size];

void Initialize()
{
    for(int i= 0 ; i <node; i++)
    {
        visit[i] = false;
        level[i] = 0;
//        mother[i] = 0;

    }
}
void AdjacentNode(int source)
{
    for(int i= 0 ; i<node; i++)
    {
        if(graph[source][i] == 1)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
void DFS(int source)
{
    visit[source] = true;
    cout<<source<<" ";
    for(int i= 0; i<node;i++)
    {
        if(graph[source][i] == 1)
        {
            if(visit[i] == false)
            {
                visit[i] = true;
                DFS(i);
            }
        }
    }
}
void BFS(int source)
{
    queue<int> q;
    visit[source] = true;
    q.push(source);

    while(!q.empty())
    {
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        for(int i= 0 ; i<node; i++)
        {
            if(graph[x][i] == 1)
            {
                if(visit[i] == false)
                {
                    visit[i] = true;
                    q.push(i);

                }
            }
        }
    }

}
int main()
{

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    cin>>node>>edge;
    for(int i=0;i<edge; i++)
    {
        int m,n;
        cin>>m>>n;
        graph[m][n] = 1;
        graph[n][m] = 1;
    }
//    for(int i= 0 ; i < node; i++)
//    {
//        for(int j = 0 ; j < node; j++)
//        {
//            cout<<graph[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    cout<<endl;
    int count = 0;
    for(int i= 0 ; i<node; i++)
    {
        if(visit[i] == false)
        {
            DFS(i);
            count++;
        }
        cout<<endl;
    }
     Initialize();

     for(int i= 0 ; i<node; i++)
    {
        if(visit[i] == false)
        {
            BFS(i);
           // count++;
        }
        cout<<endl;
    }
    /*
    Initialize();
    BFS(0);
    Initialize();
    cout<<endl;
    DFS(0);
    */

    return 0;
}
/*
12 15
0 1
0 7
1 7
1 2
7 8
2 8
7 6
8 6
2 5
6 5
3 5
3 4
5 4
9 10
10 11
*/
