#include<iostream>
#include "List.h"
using namespace std;
int main(){
    List l;
    l.push_front(1);
    l.push_back(2);
    l.push_back(56);
   // l.push_front(123);
    l.insert(44,2);
    l.insert(10,2);
    l.InsertInaSortedList(3);
   
    Node* Head=l.Begin();
    while(Head!=NULL){
        cout<<Head->getData()<<"->";
        Head=Head->next;
    }
}