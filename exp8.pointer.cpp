#include <iostream>
using namespace std;

// Function to increment an integer using a pointer
void increment(int *a)
{
    (*a)++; // Increment the value pointed to by 'a'
}

// Function to swap two integers using pointers
void swap(int *a, int *b)
{
    int t;
    t = *a; // Store the value pointed to by 'a' in 't'
    *a = *b; // Replace the value pointed to by 'a' with the value pointed to by 'b'
    *b = t; // Replace the value pointed to by 'b' with 't'
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int i;
    int *ptr = &arr[i]; // Initialize a pointer 'ptr' to the address of 'arr[i]'

    // Print elements of 'arr' and their memory addresses using a pointer
    for (i = 0; i < 4; i++)
    {
        cout << *ptr << " "; // Print the value pointed to by 'ptr'
        cout << &arr[i] << endl; // Print the memory address of 'arr[i]'
        ptr++; // Move the pointer to the next element in the array
    }

    int arr1[] = {10, 20, 30, 40};
    int j;
    for (j = 0; j < 4; j++)
    {
        cout << arr[j] << endl; // Print elements of 'arr1'
    }

    int b = 2;
    increment(&b); // Call the increment function to increment 'b'
    cout << b << endl; // Print the updated value of 'b'

    int c = 15;
    int d = 20;
    cout << "c: " << c << endl; // Print the original values of 'c' and 'd'
    cout << "d: " << d << endl;
    swap(&c, &d); // Call the swap function to swap 'c' and 'd'
    cout << "After swapping:" << endl;
    cout << "c: " << c << endl; // Print the swapped values of 'c' and 'd'
    cout << "d: " << d << endl;

    char *str = "Symbiosis Institute of Technology";
    cout << *(str + 0) << *(str + 10) << *(str + 23); // Print specific characters from the string

    return 0;
}

/*
OUTPUT
10 0x7ffe03442030
20 0x7ffe03442034
30 0x7ffe03442038
40 0x7ffe0344203c
10
20
30
40
3
c: 15
d: 20
After swapping:
c: 20
d: 15
SIT
*/