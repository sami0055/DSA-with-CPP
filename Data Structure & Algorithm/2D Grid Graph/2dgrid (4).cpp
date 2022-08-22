#include<iostream>
#include<queue>
using namespace std;
int grid[8][8];
bool visited[8][8] = {false};
int source[8][8];
int level[8][8] = {0};

struct node
{
    int x;
    int y;
};

int dx[] = {-1,1,0,0,-1,1,1,-1};
int dy[] = {0,0,-1,1,1,1,-1,-1};

bool Valid(int x, int y)
{
    if(x>=0 && y>=0 && x<8 && y<8 && !visited[x][y])
    {
        return true;
    }
    else
    {
        return false;
    }
}
void DFS(int source_x, int source_y)
{
    visited[source_x][source_y] = true;
    for(int i = 0; i < 4; i++)
    {
        int next_x = source_x+dx[i];
        int next_y = source_y+dy[i];
        if(Valid(next_x,next_y))
        {
            DFS(next_x,next_y);
        }
    }
}
void BFS(int source_x,int source_y)
{
    queue<node> q;
    visited[source_x][source_y] = true;
    node n;
    n.x = source_x;
    n.y = source_y;
    q.push(n);
    while (!q.empty())
    {
        int xx = q.front().x;
        int yy = q.front().y;
        q.pop();
        for(int i= 0 ; i<8;i++)
        {
            int next_x = xx+dx[i];
            int next_y = yy+dy[i];
            if(Valid(next_x,next_y))
            {
                visited[next_x][next_y] = true;
                node n2;
                n2.x = next_x;
                n2.y = next_y;
                q.push(n2);
                level[next_x][next_y] = level[xx][yy] + 1;
            }
        }
    }


}
int main()
{
    BFS(4,4);
    for(int i= 0 ; i <8; i++)
    {
        for(int j=0;j<8;j++)
        {
            cout<<level[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
