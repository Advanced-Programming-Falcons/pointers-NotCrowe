#include <iostream>

using namespace std;

int main(void){
    
    //Starting by asking for size (for array later)
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size;

    //array
    int* array = new int(size);
    int* arr;
    
    //Put a value into array equal to i times 2
    for(int i=0;i<size;i++){
        array[i] = 2*i;
    }
    //print array
    for(int* arr=array;arr<array+size;arr++){
        cout << "Value: " << *arr << endl; 
    }

    //Change all of the values in array by adding 5 to all of them
    for(int i=0;i<size;i++){
        array[i] += 5;
    }
    //print array
    for(int* arr=array;arr<array+size;arr++){
        cout << "Value plus five: " << *arr << endl; 
    }
    
    //Shift values in the array to the right and wrap it around
    int temp_var = array[size-1];
    for(int i=size-1;i>0;i--){
        array[i] = array[i-1]; 
    }
    array[0] = temp_var;
    //print array
    for(int* arr=array;arr<array+size;arr++){
        cout << "Value when shifted to the right: " << *arr << endl; 
    }

    //delete array and return to end the program!
    delete(array);
    return 0;
}
