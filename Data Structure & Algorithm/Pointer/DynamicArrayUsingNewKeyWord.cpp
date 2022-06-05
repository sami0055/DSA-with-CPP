#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int *arr=new int[n];
    for(int i=0; i<n; i++)
    {
        arr[i]=i;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr<<endl;
    //1 D array declear by malloc function
    cout<<endl;
    int *arr2=(int*)(malloc(sizeof(int)*n));
    for(int i=0; i<n; i++){
        arr2[i]=i+2;
        cout<<arr2[i]<<" ";
    }
    delete [] arr;
    delete [] arr2;
    cout<<endl;
    cout<<arr<<endl;
}