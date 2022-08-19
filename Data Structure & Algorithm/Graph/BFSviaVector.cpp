#include<bits/stdc++.h>

using namespace std;
int const N=100;
vector<int>v[N];
int node,edge;
bool visited[N];

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
        for(int i=0; i<v[x].size(); i++)
        {
            int y=v[x][i];
            if(visited[y]==false)
            {
                q.push(y);
                visited[y]=true;
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
    int f,s;
    cin>>f>>s;
    v[f].push_back(s);
    v[s].push_back(f);

  }
  BFS(0);



}