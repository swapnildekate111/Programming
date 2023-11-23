// C++ program to demonstrate the size and range of datatypes

#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    // cout << "Size of char: " << sizeof(char) << endl;
    // cout << "Size of int: " << sizeof(int) << endl;
    // cout << "Size of long: " << sizeof(long) << endl;
    // cout << "Size of float: " << sizeof(float) << endl;
    // cout << "Size of double: " << sizeof(double) << endl;

    /******** Range of Data Types ********/
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "minimum char value: " << CHAR_MIN << endl;
    cout << "maximum char value: " << CHAR_MAX << endl;
    cout << "size of int: " << sizeof(int) << " bytes" << endl;
    cout << "size of long int: " << sizeof (long int) << " bytes" << endl;
    cout << "size of signed long int: " << sizeof(signed long int) << " bytes" << endl;
    cout << "size of unsigned long int: " << sizeof(unsigned long int) << " bytes" << endl;
    cout << "size of float: " << sizeof(float) << " bytes" << endl;
    cout << "size of double: " << sizeof(double) << " bytes" << endl;
    cout << "size of wchar_t: " << sizeof(wchar_t) << " bytes" << endl;
}