/********************* Local Variable ************************/

// // C++ program to illustrate usage of local variables
// #include <iostream>
// using namespace std;

// void func() {
//     // This variable is local to the function func() and cannot be
//     // accessed outside this function
//     int age = 18;
//     cout << age << endl;
// }

// int main() {
//     // cout << "Age: " << age << endl;
//     cout << "Age: ";
//     func();
// }

/******************** Global VAriable *********************************/

// C++ program to illustrate usage of global variables
#include <iostream>
using namespace std;

// global variable
int global = 5;

// global variable accessed from within the function
void display() {
    cout << global << endl;
}

// main function
int main() {
    display();

    // changing value of global variable from main function
    global = 10;
    cout << global << endl;

    // declare local variable with the same name as global variable
    int global = 2;
    cout << global << endl;

    // accessing global variable with the use of
    // scope resolution operator
    cout << ::global << endl;
}