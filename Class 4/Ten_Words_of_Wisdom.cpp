#include<bits/stdc++.h>
using namespace std;

int32_t main()
{   
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], b[n];

        for(int i = 0; i < n; i++){
            cin >> a[i] >> b[i];
        }


        int ans = 0;

        for(int i = 0; i < n; i++){
            if(a[i] <= 10 && b[i] > b[ans]){
                ans = i;
            }
        }

        cout << ans + 1 << endl;
    }
    
    return 0;
}