#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the size of array";
    cin>>n;
  int A[n];
  A[0]=12;
  A[1]=21;
  A[2]=45;
  int B[10]={2,3,4,5,6,7,8,8};
  cout<<B[9]<<endl;
  cout <<sizeof(A)<<endl;
  cout<<A[1]<<endl;
  for(int i=0; i<10; i++){
    cout<<B[i]<<endl;
  }
  for(int x:A){
    cout<<x<<endl;;
  }
return 0;
}
