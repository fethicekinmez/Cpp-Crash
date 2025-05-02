#include <iostream>

int main() {
    int a = 5;
    int b = 3;

    // Logical AND
    if (a && b) {
        std::cout << "Both a and b are non-zero" << std::endl;
    } else {
        std::cout << "At least one of a or b is zero" << std::endl;
    }

    // Logical OR
    if (a || b) {
        std::cout << "At least one of a or b is non-zero" << std::endl;
    } else {
        std::cout << "Both a and b are zero" << std::endl;
    }

    a = 0;
    if (a && b) {
        std::cout << "Both a and b are non-zero" << std::endl;
    } else {
        std::cout << "At least one of a or b is zero" << std::endl;
    }

    // Logical OR
    if (a || b) {
        std::cout << "At least one of a or b is non-zero" << std::endl;
    } else {
        std::cout << "Both a and b are zero" << std::endl;
    }
    return 0;
}

/*
Both a and b are non-zero
At least one of a or b is non-zero
At least one of a or b is zero
At least one of a or b is non-zero
*/