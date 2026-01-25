// user define data type .
#include <iostream>
using namespace std;
class Vector{
    public :
    int size;
    int *arr;
    int capacity;
    Vector(){
        size = 0;
        capacity = 1;
        arr = new int [1];
    }
    void add(int element ){
        if (size == capacity){
            // create a new array
            capacity *= 2;
            int *newArr = new int [capacity];
            // copy old array element to new array
            for (int i = 0; i < size; i++){
                newArr[i] = arr[i];
            }
            // delete old array
            delete [] arr;
            // point arr to new array
            arr = newArr;
        }            
        arr[size++] = element;
    }
    int get(int index){
        if(index > size){
            cout<<"invalid index"<<endl;
             return -1;
       }
        if(index < 0){
            cout<<"invalid index"<<endl;
            return -1;
        }
        else{
            return arr[index];
        }
    }
    void print(){
        for (int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void remove(){
        if (size > 0){
            size--;
        }
    }
};
int main() {
  Vector v;
  v.add(1);
  v.print();
    v.add(2);
    v.print();
    v.add(3);
    v.print();
    v.remove();
    v.print();
    return 0;
}