#include<bits/stdc++.h>
using namespace std;

int32_t main()
{   
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        int i = 1;
        while(k){
            if(i % 3 == 0 || i % 10 == 3) i++;
            else k--, i++;
        }
        cout << i - 1 << endl;
    }
    
    return 0;
}