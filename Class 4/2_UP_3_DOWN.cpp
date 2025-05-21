#include<bits/stdc++.h>
using namespace std;

int32_t main()
{   
    int x, y; cin >> x >> y;

    if(x < y){ // move up
        int floors = y - x;
        if(floors <= 2) cout << "Yes" ;
        else cout << "No";
    }
    else if(x > y){ // move down
        int floors = x - y;
        if(floors <= 3) cout << "Yes" ;
        else cout << "No";
    }   
    
    return 0;
}