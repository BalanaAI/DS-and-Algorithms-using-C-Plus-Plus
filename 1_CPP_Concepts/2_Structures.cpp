/****************************************************************
 *                         Structures
 * 
 * In C Language when we declare a variable of type Structure
 * then it is mandatory to write "struct" before the structure
 * name. For example, we have:
 * 
 * struct Rectangle{
 *   int length;
 *   int width;
 * };
 * 
 * Then to declare a variable of struct type in C language we 
 * have to write the following:
 * 
 * struct Rectangle r1;
 * 
 * But in C++ the keyword "struct" is optional at the time of
 * declaration of variable of type structure. So, for the above
 * structure in C++ we have to write either:
 * 
 * Rectangle r1;
 * 
 * OR
 * 
 * struct Rectangle r1;
 * 
 * Both are valid ways of declaration of variable of type 
 * structure.
 ****************************************************************/
#include <iostream>

using namespace std;

// Define a Structure
struct Rectangle{
    int length;
    int width;
};

int main() {
    // Declare a structure variable
    struct Rectangle r1;

    // Assign values to structure members
    r1.length = 10;
    r1.width = 12;

    cout << "Size of r1 = " << sizeof(r1) << endl;
    cout << "r1 length = " << r1.length << " and width = " << r1.width;
    cout << endl;

    // Declare and Initialize Structure variable
    struct Rectangle r2 {4, 6};
    cout << endl;
    cout << "Size of r2 = " << sizeof(r2) << endl;
    cout << "r2 length = " << r2.length << " and width = " << r2.width;
    cout << endl;

    return 0;
}