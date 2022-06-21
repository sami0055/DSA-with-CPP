#ifndef DYNARR_H
#define DYNARR_H

template<class T>
class dynArr
{
    private:
        T* data;
        int Size;

    public:
        dynArr();
        dynArr(int);
        void setValue(int,T);
        T getValue(int);
        void allocate(int);
        virtual ~dynArr();

};

#endif // DYNARR_H
