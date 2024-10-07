#include <iostream>

using namespace std;

int main(void){
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size;

    int* array = new int(size);
    int* arr;
    
    for(int i=0;i<size;i++){
        array[i] = 2*i;
    }
    for(int* arr=array;arr<array+size;arr++){
        cout << "Value: " << *arr << endl; 
    }
    for(int i=0;i<size;i++){
        array[i] += 5;
    }
    for(int* arr=array;arr<array+size;arr++){
        cout << "Value plus five: " << *arr << endl; 
    }
    
    int temp_var = array[size-1];
    for(int i=size-1;i>0;i--){
        array[i] = array[i-1]; 
    }
    array[0] = temp_var;
    for(int* arr=array;arr<array+size;arr++){
        cout << "Value when shifted to the right: " << *arr << endl; 
    }

    delete(array);
    return 0;
}
