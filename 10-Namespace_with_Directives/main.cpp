#include <iostream>
using namespace std;

namespace firstSpace{
    void print(){
        cout << "Hello from firstSpace!" << endl;
    }
}

namespace secondSpace{
    void print(){
        cout << "Hello from secondSpace!" << endl;
    }
}

int main(){

    firstSpace::print();

    secondSpace::print();

    return 0;
}

/*
Hello from firstSpace!
Hello from secondSpace!
*/