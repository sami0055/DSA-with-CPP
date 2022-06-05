#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int a[3]={1,2,3};

   cout<<"Enter the size of array: "<<endl;
   int n;
   cin>>n;

   int *arr2=(int*)malloc(n*sizeof(int));
   for(int i=0; i<n; i++)
   {
       cin>>*(arr2+i);
       //cin>>arr2[i]
   }
   //arr2[0]=34;
  // arr2[1]=56;
  // arr2[2]=11;
    for(int i=0; i<n; i++)
    {
        cout<<*(arr2++)<<endl;
        //cout<<arr[i]<<endl;
    }
}