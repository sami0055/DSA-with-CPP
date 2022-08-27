#include<bits/stdc++.h>
using namespace std;
const int N=10e4;
vector<int> graph[N];
bool visited[N];

void dfs(int src)
{
    visited[src]=true;
    for(int i=0; i<graph[src].size(); i++)
    {
        int next=graph[src][i];
        if(visited[next]==false)
        {
            dfs(next);
        }
    }
}
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    for(int i=1; i<n; i++)
    {
        int a;
      scanf("%d",&a);
      graph[i].push_back(a+i);
    }

    dfs(1);
    if(visited[t]==true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;


}