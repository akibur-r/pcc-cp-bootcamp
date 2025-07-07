#include <bits/stdc++.h>
using namespace std;
// #define ll long long int
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    cout << sum << endl;
    for (int i = 1; i <= n; i += 1)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}