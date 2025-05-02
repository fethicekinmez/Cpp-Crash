#include <iostream>
using namespace std;

#define MKSTR(x) #x

#define PI 3.14159
#define area(r) (PI * (r) * (r))

int main(){

    cout << "The string is: " << MKSTR(Hello World) << endl; // The string is: Hello World

    cout << "The area of a circle with radius 5 is: " << area(5) << endl; // The area of a circle with radius 5 is: 78.5397

}