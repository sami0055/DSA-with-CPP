#include<bits/stdc++.h>
using namespace std;
const int N=8;
int graph[N][N];
int visited[N][N];
int level[N][N];
int kx[]={1,2,1,2,-1,-2,-1,-2};
int ky[]={2,1,-2,-1,-2,-1,2,1};

int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,1,-1,1};
int level2[N][N];
void resetVis()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            visited[i][j]=false;
        }

    }
}
bool valid(int x,int y)
{
    return (x>=0 && x<N && y>=0 && y<N && !visited[x][y]);

}

struct Node{
    int x;
    int y;

};

void DFS(int x,int y)
{
    visited[x][y]=true;

    for(int i=0; i<8; i++)
    {
        int next_x=x+kx[i];
        int next_y=y+ky[i];
        if(valid(next_x,next_y))
        {
            visited[next_x][next_y]=true;
            level2[next_x][next_y]=level2[x][y]+1;
            DFS(next_x,next_y);
        }

    }
}
void BFS(int sx,int sy)
{
    queue<Node> q;
    q.push({sx,sy});
    visited[sx][sy]=true;
    while(!q.empty())
    {
     int x=q.front().x;
     int y=q.front().y;
      
      q.pop();
      for(int i=0; i<8; i++)
      {
        int next_x=x+kx[i];
        int next_y=y+ky[i];
        if(valid(next_x,next_y))
        {
            visited[next_x][next_y]=1;
            q.push({next_x,next_y});
           level[next_x][next_y] = level[x][y] + 1;
        }
      }


    }

}
int main()
{
  
  int x1,x2,y1,y2;
  cout<<"Enter source and destination "<<endl;
  cin>>x1>>x2>>y1>>y2;
  BFS(x1,x2);
  
  cout<<"Minimum stem for destination "<<y1<<", "<<y2<<" is "<<level[y1][y2]<<endl;
 


}