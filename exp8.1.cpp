// WAP TP PERFORM POINTER INCREMENT 
#include <iostream>
using namespace std;

int main()
{
    int a = 10; // Declare an integer variable 'a' and initialize it with 10
    int *aptr; // Declare an integer pointer 'aptr'
    float fl_value = 34.56; // Declare a float variable 'fl_value' and initialize it with 34.56
    float *fl_ptr; // Declare a float pointer 'fl_ptr'
    char cr_value = 'a'; // Declare a character variable 'cr_value' and initialize it with 'a'
    char *cr_ptr; // Declare a character pointer 'cr_ptr'

    aptr = &a; // Assign the address of 'a' to 'aptr'

    // Output the value of 'a', its location, and the value stored in 'aptr' (address of 'a')
    cout << "Value of a: " << a << endl;
    cout << "Location of a: " << &a << endl;
    cout << "Value of aptr: " << aptr << endl;

    int **aptr2 = &aptr; // Declare a double pointer 'aptr2' and assign the address of 'aptr' to it
    ++aptr; // Increment 'aptr' (point to the next integer in memory)

    // Output the value of the incremented 'aptr' and the value stored in 'aptr2'
    cout << "Value of incremented aptr: " << aptr << endl;
    cout << "Value in double pointer aptr2: " << aptr2 << endl;

    fl_ptr = &fl_value; // Assign the address of 'fl_value' to 'fl_ptr'

    // Output the value of 'fl_value' and the address stored in 'fl_ptr'
    cout << "Value of float: " << fl_value << endl;
    cout << "Value of fl_ptr: " << fl_ptr << endl;
    ++fl_ptr; // Increment 'fl_ptr' (point to the next float in memory)

    // Output the value of the incremented 'fl_ptr'
    cout << "Value of Incremented fl_ptr: " << fl_ptr << endl;

    cr_ptr = &cr_value; // Assign the address of 'cr_value' to 'cr_ptr'

    // Output the value of 'cr_value' and the address stored in 'cr_ptr'
    cout << "Value of character: " << cr_value << endl;
    cout << "Value of cr_ptr: " << (void *)cr_ptr << endl; // Cast 'cr_ptr' to void pointer for output
    ++cr_ptr; // Increment 'cr_ptr' (point to the next character in memory)

    // Output the value of the incremented 'cr_ptr' (cast to void pointer for output)
    cout << "Value of Incremented cr_ptr: " << (void *)cr_ptr << endl;

    return 0;
}

/* OUTPUT OF THE CODE 
Value of a: 10
Location of a: 0x61ff00
Value of aptr: 0x61ff00
Value of incremented aptr: 0x61ff04    
Value in double pointer aptr2: 0x61fefc
Value of float: 34.56
Value of fl_ptr: 0x61fef8
Value of Incremented fl_ptr: 0x61fefc
Value of character: a
Value of cr_ptr: 0x61fef7
Value of Incremented cr_ptr: 0x61fef8
PS F:\c++\c>*/