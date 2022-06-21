#include <iostream>
#include "dynArr.cpp"
using namespace std;


int main()
{
    cout << "Hello world!" << endl;
    dynArr<int>d(5);

     cout<<"Enter data: "<<endl;
    for(int i=0; i<5; i++)
    {
        int t;
        cin>>t;

      d.setValue(i,t);
    }

      cout<<"Size increased by 10 please input element for rest of the index: "<<endl;

    d.allocate(15);

    for(int i=0; i<15; i++)
    {
        cout<<d.getValue(i)<<endl;
    }


    return 0;
}
