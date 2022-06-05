#include<bits/stdc++.h>
using namespace std;
void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main(){

int a=19,b=20;
cout<<a<<" "<<b<<endl;
swap(a,b);
cout<<a<<" "<<b<<endl;
}