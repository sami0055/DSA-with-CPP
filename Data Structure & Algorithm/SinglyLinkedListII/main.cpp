#include <iostream>
#include "LinkedList.cpp"
using namespace std;

int main()
{

   LinkedList<int> ll;
   ll.addFront(4);
   ll.addRear(6);
   ll.addFront(66);
   ll.addRear(88);
   ll.addFront(55);
   ll.addItem(55,99);


   if(ll.findItem(88))
    cout<<"Item Found"<<endl;
   else
    cout<<"Item not found"<<endl;
   ll.Print();

  // cout<<"After delete from the front"<<endl;
  // ll.deleteFront();
  // ll.deleteRear();
   ll.deleteItem(4);
   ll.Print();


    return 0;
}
