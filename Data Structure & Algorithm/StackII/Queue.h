#ifndef QUEUE_H
#define QUEUE_H
const int M=20;
class EmptyQue{};
class FullQue{};
template<class T>
class Queue
{
    public:
        Queue();
        bool isEmpty();
        bool isFull();
        void Enque(T);
        void Deque();
        void makeEmpty();
        T Front();

    private:
        T data[M];
        int rear;
        int front;
};

#endif // QUEUE_H
