#include "SortedList.h"
#include<iostream>
using namespace std;


template<class T>
SortedList<T>::SortedList()
{
    length=0;
    currentPos=-1;
}
template<class T>
void SortedList<T>::MakeEmpty()
{
    length=0;
}
template<class T>
int SortedList<T>::LengthIs()
{
    return length;

}
template<class T>
void SortedList<T>::GetNextItem(T &Item)
{
    if(currentPos<length-1)
    {

        currentPos++;
        Item=info[currentPos];
    }

}
template<class T>
bool SortedList<T>::isFull()
{
    return length==MAX;
}
template<class T>
void SortedList<T>::InsertItem(T item)
{


          if(length!=0){

                if(length==MAX)
                 return;
               int i=0;
               while(item>info[i])
               {
                   i++;
               }

               int j;
               for(j=length; j>i; j--)
               {
                   info[j]=info[j-1];
               }


               info[j]=item;
               length++;


     }
       else{
            info[length]=item;
            length++;

            }



}
template <class T>
 void SortedList<T>::DeleteItem(T item)
{
    int i;
    for(i=0; i<length; i++)
    {
        if(item==info[i])
            break;

    }
    if(i!=length)
    {
         for(int j=i; j<length-1; j++)
    {
        info[j]=info[j+1];
    }
       length--;

    }

}
template <class T>
void SortedList<T>::Print()
{
    for (int i=0; i<length; i++) {
        cout << info[i] << endl;
    }
}

