#include <iostream>
using namespace std;
int temp = 10;
float div()
{
    float a, b;
    cin >> a >> b;
    float div = a / b;
    return div;
}
int main()
{
    cout << div() << '\n';
    return 0;
}
