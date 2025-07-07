#include<iostream>
using namespace std;

int main() {
    /// int --- 4 bytes
    /// float --- 4 bytes, 8 bytes
    /// double --- 8 bytes
    /// bool --- 1 bytes
    /// char --- 1 bytes


    int *a; ///pointer ---> points to a memory address
    int x; ///variable ---> denoted a value stored in the memory


    ///value, address

    x = 10;
    cout << &x << '\n';

    return 0;
}
