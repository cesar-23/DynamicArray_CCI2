#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__


template <typename T>
class DynamicArray{
    private:
        int size;

        void resize(int newSize);
    public:
        T *arr;
        DynamicArray();
        DynamicArray(const T* ptr, int size);
        DynamicArray(const DynamicArray &o);

        void push_back(int element);
        void insert(int elem,int pos);
        void remove(int pos);

        int getSize() const{
            return size;
        }

        void print ();
        ~DynamicArray();
};

template <typename T>
DynamicArray<T>::DynamicArray(){
    size = 0;
    arr = new int[size];
}

template <typename T>
DynamicArray<T>::DynamicArray(const T*ptr, int size){
    this->size = size;
    this->arr =  new T[size];
    for(int i=0;i<size;i++)
        arr[i] = ptr[i];
}

template <typename T>
DynamicArray<T>::DynamicArray(const DynamicArray<T> &o){
    this->size = o.size;
    this->arr =  new T[o.size];
    for(int i=0;i<size;i++)
        arr[i] = o.arr[i];
}

template <typename T>
void DynamicArray<T>::resize(int newSize) {
    int *tmp = new int[newSize];
    int minSize = (newSize > size) ? size : newSize;
    for(int i = 0; i < minSize; i++){
        tmp[i] = arr[i];
    }
    delete[] arr;
    size = newSize;
    arr = tmp;
}

template <typename T>
void DynamicArray<T>::push_back(int element){
    resize(size+1);
    arr[size-1] = element;
}

template <typename T>
void DynamicArray<T>::insert(int elem, int pos){
    if(pos < 0 || pos > size)
        return;
    resize(size+1);
    for (int i=size-1; i>=pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=elem;
}

template <typename T>
void DynamicArray<T>::remove(int pos){
    if(pos < 0 || pos > size)
        return;
    for(int i = pos; i < size; i++)
        arr[i] = arr[i +1];
    resize(size-1);
}


template <typename T>
void DynamicArray<T>::print(){
    for(int i=0;i<this->size;i++){
        std::cout << arr[i] <<" ";
    }
    std::cout <<"\n";
}

template <typename T>
DynamicArray<T>::~DynamicArray(){
    delete []arr;
}

template <typename T>
std::ostream& operator << (std::ostream &out, const DynamicArray<T> &o){
    for(int i=0;i<o.getSize();i++){
        out << o.arr[i]<<" ";
    }
    out <<"\n";
    return out;
}

#endif