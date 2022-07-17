#include <iostream>
#include "stacktype.cpp";
#include "Queue.cpp"
using namespace std;
template<class T>
void CheckFull(stacktype<T> s)
{
    if(s.isFull())
    {
        cout<<"Stack is FUll"<<endl;
    }else{
       cout<<"Stack not FUll"<<endl;
    }
}
template<class T>
void CheckEmpty(stacktype<T> s)
{
    if(s.isEmpty())
    {

        cout<<"Stack is Empty "<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
}
template<class T>
void PrintStack(stacktype<T> s)
{
   stacktype<T> temp;
   Queue<T> t;
   while(!s.isEmpty())
   {
       temp.Push(s.Top());
       t.Enque(s.Top());
       s.Pop();
   }
   while(!temp.isEmpty())
   {

       cout<<temp.Top()<<" ";
       s.Push(temp.Top());
       temp.Pop();
   }
   cout<<endl;
   while(!t.isEmpty())
   {
       cout<<t.Front()<<" ";
       t.Deque();
   }

}
bool isBalance2(string s)
{
    stacktype<char> t2;
    int l=s.length();
    char ch;
    for(int i=0; i<l; i++)
    {
        if(s[i]=='('|| s[i]=='['|| s[i]=='{'){
            t2.Push(s[i]);
           }
           else{
            if(t2.isEmpty())
            {
                return false;
            }
            else{
              if(s[i]==')')
              {
                ch=t2.Top();
                t2.Pop();
                if(ch=='{' || ch=='[')
                    return false;
                    break;
              }
              else if(s[i]=='}')
              {
                  ch=t2.Top();
                  t2.Pop();
                  if(ch=='(' || ch=='[')
                        return false;
                        break;

              }
              else if(s[i]==']'){
                ch=t2.Top();
                t2.Pop();
                if(ch=='}' || ch==')')
                    return false;
                    break;
              }
            }
           }
    }
    if(t2.isEmpty())
        return true;
    else
        return false;
}
bool isBalance(string s)
{
    stacktype<char> t;
    int l=s.length();
    for(int i=0; i<l; i++)
    {
        if(s[i]=='('){
            t.Push(s[i]);
           }
           else{
            if(t.isEmpty())
            {
                return false;
            }
            else{
                t.Pop();
            }
           }
    }
    if(t.isEmpty())
    {
        return true;
    }
    else{
        return false;
    }
}
void reverseString(string s)
{
    stacktype<char> st;
    int l=s.length();
    for(int i=0; i<l; i++)
    {
        st.Push(s[i]);
    }
    while(!st.isEmpty())
    {
        cout<<st.Top();
        st.Pop();
    }
}
bool isPalindrome(string str)
{
    int l=str.length();
    stacktype<char> st1;
    int i,mid=l/2;
    for(i=0; i<mid; i++)
        st1.Push(str[i]);

    if(l%2!=0)
        i++;
    char ele;
    while(str[i]!='\0')
    {

        ele=st1.Top();
        st1.Pop();
        if(ele!=str[i])
            return false;
        i++;
    }
    return true;
}
int main()
{

/*
  stacktype<int> s;
  s.Push(20);
  s.Push(30);
  s.Push(40);
  s.Push(50);
  s.Push(60);
  PrintStack(s);
  string s1;
  cin>>s1;
  bool b=isBalance(s1);
  if(b)
  {
      cout<<"Balanced"<<endl;
  }
  else{
    cout<<"Not Balanced"<<endl;
  }
  */
  /*
  cout<<"Enter another Parenthesis: "<<endl;
  string s3;
  cin>>s3;
  bool b2=isBalance2(s3);
  if(b2)
    cout<<"Balanced"<<endl;
  else
    cout<<"Not balanced "<<endl;

    */
    cout<<"Enter A string for reverse and check Palindrome: "<<endl;
    string st;
    getline(cin,st);

    reverseString(st);
    cout<<endl;
    bool bb=isPalindrome(st);
    if(bb)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not palindrome"<<endl;




}
