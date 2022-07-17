#ifndef STACKTYPE_H
#define STACKTYPE_H
const int M=20;
class FullStack{};
class EmptyStack{};

template<class T>
class stacktype
{
    public:
        stacktype();
        bool isFull();
        bool isEmpty();
        void Push(T);
        void Pop();
        T Top();

    private:
        T data[M];
        int top;

};

#endif // STACKTYPE_H
