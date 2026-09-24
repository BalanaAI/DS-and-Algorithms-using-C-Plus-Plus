/****************************************************************
 *                         Pointers
 *
 * In C, an array can be created on the heap using the malloc()
 * function. The function allocates memory while the program is
 * running and returns the address of the first byte of that
 * memory. You store that address in a pointer.
 * Include the required header:
 * #include <stdlib.h>   // Contains malloc() and free()
 * Note that malloc() returns a pointer to the beginning of the
 * allocated block of memory.
 * Also, in real programs, you should check whether malloc()
 * succeeded using the equality operator for NULL.
 *
 * Memory allocated with malloc() stays allocated until you
 * release it. If you don't call free(), your program leaks
 * memory (a memory leak). So, always free the memory with
 * free(pointer-name) when you're done.
 ****************************************************************/
#include <iostream>
#include <stdlib.h> // Must include for C language malloc()

using namespace std;

int main() {
  int x{17};
  // Pointer Declaration
  int *ptr; // ptr is a pointer to integer type

  // Assign the address to pointer variable
  ptr = &x;

  printf("Address of x = %d\n", &x);
  printf("Value in ptr = %d\n", ptr);
  printf("\n");
  printf("Value of x = %d\n", x);
  printf("Value of x using pointer dereferencing, *ptr = %d\n", *ptr);

  // Create and Initialize Array on Stack Memory
  int A[5]{2, 4, 6, 8, 10}; // This Array will be created in Stack
  // Declare a pointer to an integer
  int *ptr1;

  /*
  Assign array starting address to the pointer, using
  just array name without an "&", because the name of an
  array is itself the starting address of the array.
  */
  ptr1 = A; // This is same as ptr1 = &A[0];

  // Access Array elements using Array Name
  cout << endl;
  cout << "Accessing Array elements using Array Name: ";
  for (int i = 0; i < 5; i++)
    cout << A[i] << " ";
  cout << endl;

  // Access Array elements using Pointer
  cout << "Accessing Array elements using Pointer to Array: ";
  for (int i = 0; i < 5; i++)
    cout << ptr1[i] << " ";
  cout << endl;

  // C-Language way to create Array on Heap Memory using Pointer
  int *ptr2; // This pointer will be created on Stack
  ptr2 = (int *)malloc(5 * sizeof(int)); // Array will be created on Heap

  /*
  Assign values to dynamically created Heap Array.
  Since this Array is created on Heap with the help of
  pointer, so it can only be accessed with this pointer
  variable, ptr2 in this case.
  */
  ptr2[0] = 15;
  ptr2[1] = 17;
  ptr2[2] = 19;
  ptr2[3] = 21;
  ptr2[4] = 23;

  // Print the Elements of Heap Array using Pointer ptr2
  cout << endl;
  cout << "Elements of Array on Heap using pointer are: ";
  for (int i = 0; i < 5; i++)
    cout << ptr2[i] << " ";
  cout << endl;

  // Deallocate Heap memory from array using C-Language
  free(ptr2);

  return 0;
}