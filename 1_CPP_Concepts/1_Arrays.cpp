/****************************************************************
 *                          Arrays
 * 
 ****************************************************************/
#include <iostream>

using namespace std;

int main() {
    int A[5];

    A[0] = 12;
    A[1] = 15;
    A[2] = 26;

    cout << "Size of Array A = " << sizeof(A) << endl;
    cout << "A[1] = " << A[1] << endl;
    // We can write C Statements inside C Plus Plus program
    printf("A[2] = %d\n", A[2]);

    // Array initialized at the time of creation
    int B[] = {2, 4, 6, 8, 10, 12, 14};

    cout << endl;
    cout << "Size of Array B = " << sizeof(B) << endl;
    cout << "B[1] = " << B[1] << endl;
    // We can write C Statements inside C Plus Plus program
    printf("B[2] = %d\n", B[2]);

    // Partially initialized Array will contain zeros in uninitialized
    // array locations
    int C[10] = {1, 3, 5, 7, 9};

    cout << endl << "Elements of Array C are: ";
    for(int i=0; i<10; i++)
        cout << C[i] << " ";
    cout << endl;

    int array_size;
    cout << "Enter the size of Array you wanted: ";
    cin >> array_size;
    // Some Compilers may not allow initialization of dynamic array
    int D[array_size] = {0, 1, 2, 3, 4};

    cout << "Array D is dynamically created as: ";
    for(int element: D)
        cout << element << " ";
    cout << endl;

    return 0;
}