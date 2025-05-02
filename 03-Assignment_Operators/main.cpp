#include <iostream>

int main(){
    int a = 5; // 0101 in binary
    int b;

    b = a; // Assignment operator
    std::cout << "Value of b after assignment: " << b << std::endl;
    b += a; // Add and assign
    std::cout << "Value of b after += operator: " << b << std::endl;
    b -= a; // Subtract and assign
    std::cout << "Value of b after -= operator: " << b << std::endl;
    b *= a; // Multiply and assign
    std::cout << "Value of b after *= operator: " << b << std::endl;
    b /= a; // Divide and assign
    std::cout << "Value of b after /= operator: " << b << std::endl;
    b %= a; // Modulus and assign
    std::cout << "Value of b after %= operator: " << b << std::endl;
    b &= a; // Bitwise AND and assign
    std::cout << "Value of b after &= operator: " << b << std::endl;
    b |= a; // Bitwise OR and assign
    std::cout << "Value of b after |= operator: " << b << std::endl;
    b ^= a; // Bitwise XOR and assign
    std::cout << "Value of b after ^= operator: " << b << std::endl;
    b <<= 1; // Left shift and assign
    std::cout << "Value of b after <<= operator: " << b << std::endl;
    b >>= 1; // Right shift and assign
    std::cout << "Value of b after >>= operator: " << b << std::endl;

    return 0;
}

/*
Value of b after assignment: 5
Value of b after += operator: 10
Value of b after -= operator: 5
Value of b after *= operator: 25
Value of b after /= operator: 5
Value of b after %= operator: 0
Value of b after &= operator: 0
Value of b after |= operator: 5
Value of b after ^= operator: 0
Value of b after <<= operator: 0
Value of b after >>= operator: 0
*/