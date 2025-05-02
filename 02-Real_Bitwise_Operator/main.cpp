#include <iostream>

int main(){

    unsigned int a = 60; // 60 = 0011 1100
    unsigned int b = 13; // 13 = 0000 1101
    int c = 0;

    c = a & b;       // 12 = 0000 1100 (And operation)
    std::cout << "Line 1 - Value of c is : " << c << std::endl;
    c = a | b;       // 61 = 0011 1101 (Or operation)
    std::cout << "Line 2 - Value of c is : " << c << std::endl;
    c = a ^ b;       // 49 = 0011 0001 (Xor operation)
    std::cout << "Line 3 - Value of c is : " << c << std::endl;
    c = ~a;          // -61 = 1100 0011 (One's complement)
    std::cout << "Line 4 - Value of c is : " << c << std::endl;
    c = a << 2;     // 240 = 1111 0000 (Left shift)
    std::cout << "Line 5 - Value of c is : " << c << std::endl;
    c = a >> 2;     // 15 = 0000 1111 (Right shift)
    std::cout << "Line 6 - Value of c is : " << c << std::endl;
    
    return 0;
}
/*
Line 1 - Value of c is : 12
Line 2 - Value of c is : 61
Line 3 - Value of c is : 49
Line 4 - Value of c is : -61
Line 5 - Value of c is : 240
Line 6 - Value of c is : 15
*/