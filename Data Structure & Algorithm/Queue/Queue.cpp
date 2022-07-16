#include "Queue.h"

template<class T>
Queue<T>::Queue()
{
    rear=-1;
    front=-1;
}
template<class T>
bool Queue<T>::isEmpty()
{
    return rear==-1 && front==-1;
}
template<class T>
void Queue<T>::Enque(T item)
{
    if(isEmpty())
    {
        rear=0;
        front=0;
    }
    else{
        rear=(rear+1)%MAX;

    }
    data[rear]=item;

}
template<class T>
T Queue<T>::Front()
{
    return data[front];
}
template<class T>
void Queue<T>::Deque()
{
  if(front==rear)
  {
      front=-1;
      rear=-1;
  }
  else{
    front=(front+1)%MAX;
  }


}

template<class T>
bool Queue<T>::isFull()
{

    return front==(rear+1)%MAX;
}
