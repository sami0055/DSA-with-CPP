#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,3,4,5};
    int *p;
    p=A;
    for(int i=0; i<4; i++)
    {
        cout<<*p;
        p++;
    }
    int *q;
    q=new int [5];
    q[0]=10;q[1]=12;q[2]=45;q[3]=66;q[4]=88;
    for(int i=0; i<5; i++)
    {

        cout<<q[i]<<endl;
    }
    delete [] q;
    return 0;
}
