#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int arr[10];

    for(int i = 0; i < 10; i++){
        arr[i] = i + 100; // Filling the array with values from 100 to 109
    }

    cout << "Element" << setw(13) << "Value" << endl;

    for(int i = 0; i < 10; i++){
        cout << setw(7) << i << setw(13) << arr[i] << endl;
    }

    return 0;
}
/*
Element        Value
      0          100
      1          101
      2          102
      3          103
      4          104
      5          105
      6          106
      7          107
      8          108
      9          109
*/