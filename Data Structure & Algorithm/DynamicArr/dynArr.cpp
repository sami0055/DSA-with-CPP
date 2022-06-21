#include "dynArr.h"
#include<iostream>
using namespace std;
template<class T>
dynArr<T>::dynArr()
{
    data=NULL;
    Size=0;
}
template<class T>
dynArr<T>::dynArr(int s)
{
    data=new T[s];
    Size=s;
}

template<class T>
void dynArr<T>::allocate(int s)
{

     T* arr=new T[s];
       int i;
     for(i=0; i<Size; i++)
     {
         arr[i]=data[i];
     }
     Size=s;
      for(int j=i; j<Size; j++)
     {
        cin>>arr[j];
     }
     data=NULL;
     delete [] data;
     data=arr;



}
template<class T>
T dynArr<T>::getValue(int index)
{
    return data[index];
}
template<class T>
void dynArr<T>::setValue(int index,T value)
{
     data[index]=value;
}
template<class T>
dynArr<T>::~dynArr()
{
   delete [] data;
}
