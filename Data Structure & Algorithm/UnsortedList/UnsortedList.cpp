#include "UnsortedList.h"
#include<iostream>
using namespace std;

template<class ItemType>
UnsortedList<ItemType>::UnsortedList()
{
   currentPos=-1;
   length=0;
}
template<class ItemType>
void UnsortedList<ItemType>::MakeEmpty()
{
    length=0;
}
template<class ItemType>
bool UnsortedList<ItemType>::IsFull()
{
    return(length==MAX_L);
}
template<class ItemType>
void UnsortedList<ItemType>::InsertItem(ItemType item)
{


    if(length!=0)
    {
         int i=0;
    if(length==MAX_L)
        return;
        while(i<length)
        {
            if(info[i]!=item)
                i++;
                else{
                    break;
                }
        }

         if(i==length){
        info[i]=item;
        length++;
    }

    }
    else{
         info[length]=item;
         ++length;

    }




}
template<class ItemType>
void UnsortedList<ItemType>::DeleteItem(ItemType item)
{
    int i;
    for(i=0; i<length; i++){
        if(info[i]==item)
            break;
    }
    if(i<length)
    {
       for(int j=i; j<length; j++)
       {
           info[j]=info[j+1];
       }
       length--;
    }


    }
    template<class ItemType>
void UnsortedList<ItemType>::GetNextItem(ItemType &item)
    {
        if(currentPos<length-1){
        currentPos++;
        item=info[currentPos];
       }

    }
template <class ItemType>
void UnsortedList<ItemType>::Print()
{
    for (int i=0; i<length; i++) {
        cout << info[i] << endl;
    }
}
 template<class ItemType>
 void UnsortedList<ItemType>::RetrieveItem(ItemType &item,bool &found)
 {

     int i=0;
     while(i<length)
     {
         if(info[i]!=item)
            i++;
            else{
                break;
            }
     }
     if(length==i)
     {
         found=false;
         return;
     }
     else{

      i=0;
      for(i=0; i<length; i++)
      {
          if(info[i]==item)
          {
              found=true;
              return;
          }
      }



     }

 }





