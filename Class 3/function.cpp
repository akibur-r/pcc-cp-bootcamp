#include<iostream>
using namespace std;

/// kono data type nai --- void type
void findSum() { ///user defined function
    int a, b;
    cin >> a >> b;

    int sum = a + b;

    cout << "Sum = " << sum << '\n';
}

int main() {
    cout << "onek kisu" << '\n' << '\n';

    findSum();
    findSum();
    findSum();
    findSum();


    ///duita number er multiplication ber koro function er maddhome

    /// gunfol() --- cout << result << '\n'


    return 0;
}
