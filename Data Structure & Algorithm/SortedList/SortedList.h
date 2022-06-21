#ifndef SORTEDLIST_H
#define SORTEDLIST_H

const int MAX=100;
template<class T>
class SortedList
{


    private:
        int currentPos;
        int length;
        T info[MAX];

    public:
        SortedList();
         bool isFull();
         void MakeEmpty();
         int LengthIs();
         void InsertItem(T);
         void DeleteItem(T);
         void RetriveItem(T&,bool&);
         void ResetList();
         void GetNextItem(T&);
         void Print();



};

#endif // SORTEDLIST_H
