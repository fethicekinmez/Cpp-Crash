#include <iostream>

int main() {
    int a = 5;
    int b = 3;

    if(a > b) {
        std::cout << "a is greater than b" << std::endl;
    } else if(a < b) {
        std::cout << "a is less than b" << std::endl;
    } else {
        std::cout << "a is equal to b" << std::endl;
    }
    
    if(a >= b) {
        std::cout << "a is greater than or equal to b" << std::endl;
    }
   
    if(a <= b) {
        std::cout << "a is less than or equal to b" << std::endl;
    }

    return 0;
}

/*
a is greater than b
a is greater than or equal to b
*/