#include<iostream>
using namespace std;
struct Rectangle{
  int length;
  int breadth;
};
void fun(struct Rectangle r)
{
    //call by value
    r.length=20;
    cout<<"Length: "<<r.length<<endl<<"Breadth: "<<r.breadth<<endl;

}
int main()
{
    struct Rectangle r={12,3};
    fun(r);
    cout<<"Length: "<<r.length<<endl<<"Breadth: "<<r.breadth<<endl;
}
