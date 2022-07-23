#ifndef STACK_H
#define STACK_H

class FullStack{};
class EmptyStack{};
template<class T>
    struct Node{
         T data;
         Node* next;

    };
template<class T>
class Stack
{

    public:
        Stack();
       ~Stack();
       void Push(T);
       void Pop();
       T Top();
       bool isEmpty();
       bool isFull();

    private:
        Node<T> *top;
};

#endif // STACK_H
