#include<iostream>
using namespace std;
int main()
{

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,e;
    cin>>n>>e;
    int** edges=new int*[n];
    for(int i=0; i<n; i++)
    {
        edges[i]=new int[n];
        for(int j=0; j<n; j++)
        {
            edges[i][j]=0;
        }
    }

    for(int i=0; i<e; i++)
    {
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         cout<<edges[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<"Enter a node for find neighbour "<<endl;
    int node;
    cin>>node;
    for(int i=0; i<n; i++)
    {
        if(edges[node][i]==1)
        cout<<i<<" ";
    }


}

/*
0 1
2 0
2 1
1 3
3 4
1 4

*/