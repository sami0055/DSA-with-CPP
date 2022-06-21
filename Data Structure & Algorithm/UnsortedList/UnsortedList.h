#ifndef UNSORTEDLIST_H
#define UNSORTEDLIST_H
const int MAX_L=100;
template<class ItemType>
class UnsortedList
{

     private:
        int length;
        ItemType info[MAX_L];
        int currentPos;
    public:
        UnsortedList();
        void MakeEmpty();
        bool IsFull();
        int LengthIs();
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        void RetrieveItem(ItemType&,bool&);
        void ResetList();
        void GetNextItem(ItemType&);
        void Print();



};

#endif // UNSORTEDLIST_H
