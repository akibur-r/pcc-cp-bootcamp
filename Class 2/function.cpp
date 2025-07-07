#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b){
    // int sum = a+b;
    // return sum;
    return a+b;
}



int main(){
    
    int a,b,c,d;
    cin >> a >> b >> c>>d;
    int ans = sum(a,b);
    int ans2 = sum(c,d);

    cout << ans <<endl;
    cout << ans2 <<endl;
    return 0;
}