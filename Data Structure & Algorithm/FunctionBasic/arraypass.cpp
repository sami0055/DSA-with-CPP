#include<iostream>
using namespace std;
void fun(int *A,int n)
{
   for(int i=0; i<n; i++)
   {
       cout<<A[i]<<endl;
       A[0]=133;
   }

}
int main()
{
    int A[]={2,3,5,6,7};
    int n=5;
    fun(A,n);
    for(int x:A)
    {
        cout<<x<<" ";
    }
}
