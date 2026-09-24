/****************************************************************
 *                  Structure AS Parameter
 * 
 * In C++, Structure can be passed as parameter in three
 * different ways:
 *  - Pass by Value
 *  - Pass by Address
 *  - Pass by Reference
 * Note that if an array is member of a structure and we are 
 * passing that structure by value then the whole array will be
 * copied from actual parameter into the formal parameter.
 ****************************************************************/
#include <iostream>
#include <stdlib.h>     // Must include for C language malloc()

using namespace std;

struct Rectangle {
    int length;
    int width;
};

// Create a Structure Dynamically on Heap using Length & Width Parameters
struct Rectangle * createRectangle(int length, int width) {
    struct Rectangle *rect_ptr = new Rectangle;
    rect_ptr->length = length;
    rect_ptr->width = width;

    // A pointer to a Structure on Heap will be returned
    return rect_ptr;
}

// Structure Passed By Value
void displayRectangle(struct Rectangle r) {
    cout << "Rectangle Length = " << r.length;
    cout << " and width = " << r.width << endl;
}

// Structure Passed By Address
int rectangleArea(struct Rectangle *r) {
    return r->length * r->width;
}

int main() {
    struct Rectangle r1 {10, 12};

    // This is Structure Pass by Value Method
    displayRectangle(r1);

    // This is Structure Pass by Address Method
    cout << "Area of rectangle r1 = " << rectangleArea(&r1);
    cout << endl << endl;

    // Create a Rectangle on Heap Memory using Pointer
    struct Rectangle *r2 = createRectangle(20, 30);

    displayRectangle(*r2);
    cout << "Area of rectangle r2 = " << rectangleArea(r2);

    delete r2;

    return 0;
}