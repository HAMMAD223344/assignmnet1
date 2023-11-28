#include<iostream>
using namespace std;
int main(){

int a[] = {1, 2, 3, 4, 5};
    int size = 5;

  
   cout << "Array elements before adding more elements: ";
    for (int i = 0; i < size; ++i) {
        cout << a[i] << " ";
    }

   
    int newSize = size + 3; 
    int* newArray = new int[newSize];

   
    for (int i = 0; i < size; ++i) {
        newArray[i] = a[i];
    }

  
    newArray[size] = 6;
    newArray[size + 1] = 7;
    newArray[size + 2] = 8;

 
    cout << "Array elements after adding more elements: ";
    for (int i = 0; i < newSize; ++i) {
       cout << newArray[i] << " ";
    }

   
    delete[] newArray;
    
    
}
