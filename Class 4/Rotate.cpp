#include<bits/stdc++.h>
using namespace std;

int32_t main()
{   
    
    int n; cin >> n;

    int c = n % 10; 

    int b = (n / 10) % 10; 

    int a = n / 100; 

    int bca = (b * 100) + (c * 10) + a;

    int cab = (c * 100) + (a * 10) + b;

    cout << n + bca + cab ;

    return 0;
}

// abc + bca + cab 

// 123
// (1 * 100) + (2 * 10) + (3 * 1)
// (1 * 10^2) + (2 * 10^1) + (3 * 10^0)
