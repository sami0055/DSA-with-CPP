#include<iostream>
using namespace std;
void TowerOfHanoi(int n,char t1,char t2,char t3)
{
    if(n==0)
        return;

    TowerOfHanoi(n-1,t1,t3,t2);
    cout<<n<<"["<<t1<<" "<<t2<<" "<<t3<<"]"<<endl;
    TowerOfHanoi(n-1,t3,t2,t1);
}
int main()
{
  TowerOfHanoi(3,'A','B','C');

}
