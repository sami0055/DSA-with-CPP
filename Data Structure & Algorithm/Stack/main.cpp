#include <iostream>
#include "stacktype.cpp"
using namespace std;
 void CheckEmpty(stacktype<int> s)
 {
     if(s.isEmpty())
     {
         cout<<"Stack is empty"<<endl;
     }
     else{
        cout<<"Stack is not empty"<<endl;
     }
 }
 void CheckFull(stacktype<int> s)
 {
     if(s.isFull())
     {
      cout<<"Full"<<endl;
     }
     else{
        cout<<"stack is not full"<<endl;
     }
 }
 void PrintStack(stacktype<int> s)
 {

     stacktype<int> temp;
     while(!s.isEmpty())
     {
         temp.Push(s.Top());
         s.Pop();

     }
     while(!temp.isEmpty())
     {
         cout<<temp.Top()<<" ";
         s.Push(temp.Top());
         temp.Pop();
     }
 }
 int PrintSum(stacktype<int> s)
 {
     int sum=0;
     stacktype<int>temp;
      while(!s.isEmpty())
      {
          temp.Push(s.Top());
          sum=sum+s.Top();
          s.Pop();
      }
       while(!temp.isEmpty())
     {
         s.Push(temp.Top());
         temp.Pop();
     }
      return sum;

 }
 bool isBalance(string str)
 {
      stacktype<char> s;
     for(int i=0; i<str.length(); i++)
     {
         if(str[i]=='(')
         {
             s.Push(str[i]);
         }
         else{
            if(s.isEmpty())
            {
                return false;
            }
            else{
                s.Pop();
            }
         }
     }
     if(s.isEmpty())
     {
         return true;
     }
     else{
        return false;
     }
 }
int main()
{
    /*
   stacktype<int> s1;
   CheckEmpty(s1);
   s1.Push(1);
   s1.Push(2);
   s1.Push(4);
   s1.Push(5);
   s1.Push(6);
   s1.Push(6);
   CheckFull(s1);
   PrintStack(s1);
   cout<<endl;
   int s=PrintSum(s1);
   cout<<"Sum is: "<<s<<endl;

   */
   string s;
   cin>>s;
   bool b=isBalance(s);
   if(b)
   {
    cout<<"Balance"<<endl;
   }
   else{
    cout<<"Not balanced"<<endl;
   }
}
