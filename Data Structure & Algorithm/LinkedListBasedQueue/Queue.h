#ifndef QUEUE_H
#define QUEUE_H

class FullQueue{};
class EmptyQueue{};
template<class T>
struct Node{
    T data;
    Node* next;

};
template<class T>
class Queue
{
    public:
        Queue();
        ~Queue();
        bool isFull();
        bool isEmpty();
        void MakeEmpty();
        void Enqueue(T);
        void Dequeue(T&);

    private:
        Node<T> *head;
        Node<T> *tail;


};

#endif // QUEUE_H
