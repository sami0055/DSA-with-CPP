#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=10;
    int *ptrx=&x;
    int **ptr2=&ptrx;


    cout<<ptrx<<endl;
    cout<<&x<<endl;
    cout<<*ptr2<<endl;
    cout<<x<<endl;
    cout<<*ptrx<<endl;
    cout<<**ptr2<<endl;
}