#include <iostream>
#include "UnsortedList.cpp"
using namespace std;

int main()
{
   UnsortedList<int> Ul;
   Ul.InsertItem(45);
   Ul.InsertItem(40);
   Ul.InsertItem(43);
   Ul.InsertItem(67);

   cout<<"Before deletion: "<<endl;
   Ul.Print();
   Ul.DeleteItem(100);
   cout<<"After Deletion: "<<endl;
   Ul.Print();
    return 0;
}
