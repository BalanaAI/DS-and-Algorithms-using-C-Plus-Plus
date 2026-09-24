/****************************************************************
 *                   Pointer to a Structure
 * 
 ****************************************************************/
#include <iostream>
#include <stdlib.h>     // Must include for C-Language malloc()

using namespace std;

// Define a Structure Type
struct Rectangle {
    int length;
    int width;
};


int main() {
    // Declare a variable of type Rectangle structure 
    struct Rectangle r1 {10, 5};

    // Access members of Rectangle structure r1
    cout << "Length of Rectangle r1 = " << r1.length << endl;
    cout << "Width of Rectangle r1 = " << r1.width << endl << endl;

    // Declare and Initialize a Structure Pointer
    struct Rectangle *rect_ptr = &r1;

    /*
    C Language way to Access members of Rectangle 
    Structure using Rectangle Pointer
    */
    cout << "Length of Rectangle r1 (using *rect_ptr) = ";
    cout << (*rect_ptr).length << endl;
    cout << "Width of Rectangle r1 (using *rect_ptr) = ";
    cout << (*rect_ptr).width << endl << endl;

    /*
    C++ way to Access members of Rectangle Structure 
    using Rectangle Pointer.
    In C++ Language both ways are valid:
    - (*ptr).member
    - ptr->member
    */
    cout << "Length of Rectangle r1 (using rect_ptr->) = ";
    cout << rect_ptr->length << endl;
    cout << "Width of Rectangle r1 (using rect_ptr->) = ";
    cout << rect_ptr->width << endl << endl;

     // C way to create a Structure on Heap using Pointer 
    // Create a Structure (Rectangle) on Heap Memory using Pointer
    struct Rectangle *rect_ptr2;
    rect_ptr2 = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    // Assign values to members of Rectangle
    (*rect_ptr2).length = 4;
    (*rect_ptr2).width = 6;

    // Display the length & width of Rectangle on Heap
    cout << "Length of Rectangle pointed by rect_ptr2 = ";
    cout << (*rect_ptr2).length << endl;
    cout << "width of Rectangle pointed by rect_ptr2 = ";
    cout << (*rect_ptr2).width << endl << endl;;

    // Release Heap memory from Structure
    free(rect_ptr2);

    // C++ way to create a Structure on Heap using Pointer
    // Create a Structure Rectangle on Heap Memory using Pointer
    Rectangle *rect_ptr3;   // This is same as struct Rectangle *rect_ptr3;
    rect_ptr3 = new Rectangle;

    // Assign values to members of rectangle structure created on Heap
    rect_ptr3->length = 20;
    rect_ptr3->width = 25;

    // Display the values of Rectangle Structure
    cout << "Length of Rectangle pointed by rect_ptr3 = ";
    cout << rect_ptr3->length << endl;
    cout << "width of Rectangle pointed by rect_ptr3 = ";
    cout << rect_ptr3->width << endl;

    // Release Heap memory from structure
    delete rect_ptr3;

    return 0;
}