/****************************************************************
 *  
 * Passing Array to Function and Returning Array from Function 
 * 
 ****************************************************************/
#include <iostream>
#include <stdlib.h>     // Must include for C language malloc()

using namespace std;

int * createArray(int arraySize) {
    int *arr_ptr = (int *)malloc(sizeof(int) * arraySize);
    for(int i=0; i<arraySize; i++)
        arr_ptr[i] = i*2 + 2;
    return arr_ptr; 
}

/*
Array as formal parameter can be specified in two ways:
    - int Array[]
    - int *Array
*/
void displayArray(int Array[], int arraySize) {
    for(int i=0; i<arraySize; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
}
int main() {
    int my_array[] {1, 3, 5, 7, 9};
    int my_array_size = sizeof(my_array) / sizeof(int);

    cout << "Elements of my_array are: ";
    // Passing Array Name is actually Address of Array
    displayArray(my_array, my_array_size);
    cout << endl;

    int size;
    int *A {nullptr};   // A pointer that will hold array address

    cout << "How big array do you wanted? ";
    cin >> size;

    // Create Array Dynamically using function
    A = createArray(size);

    cout << "Elements of Array A are: ";
    // Passing Array Name is actually Address of Array
    displayArray(A, size);  

    // Delete Array from Heap and Free the memory resources
    free(A);
    
    return 0;
}