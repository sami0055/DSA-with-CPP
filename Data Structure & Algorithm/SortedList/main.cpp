#include <iostream>
#include "SortedList.cpp"
using namespace std;

int main()
{
    SortedList<int> s1;
    s1.InsertItem(12);
    s1.InsertItem(34);
    s1.InsertItem(11);
    s1.InsertItem(17);
    s1.InsertItem(10);
    s1.Print();
    s1.DeleteItem(50);

    cout<<"After Deletion: "<<endl;
    s1.Print();
}
