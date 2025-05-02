#include <iostream>
using namespace std;

#define concat(a, b) a##b

    // The ## operator is used to concatenate two tokens in C++ preprocessor macros.

int main(){

    int xy = 100;
    string str1 = "Hello World";

    cout << concat(x, y) << endl; // This will print the value of xy
    cout << concat(str, 1) << endl; // This will print the value of str1

}