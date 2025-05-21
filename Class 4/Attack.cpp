#include<bits/stdc++.h>
using namespace std;

int32_t main()
{   
    long long a, b; 
    cin >> a >> b; 

    long long cnt;

    if(a % b == 0){
        cnt = a/ b;
    }
    else{
        cnt = a / b;
        cnt ++;
    }

    cout << cnt ;
    
    return 0;
}

