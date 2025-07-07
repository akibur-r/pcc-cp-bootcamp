#include<bits/stdc++.h>
using namespace std;
int main(){

    int even = 0 , odd = 0 ;
    for(int i = 1; i<= 20; i+=1){
        if(i % 2 == 0){
            even += i;
        }
        else{
            odd += i;
        }
    }
    cout <<"Sumaiton of Even = "<< even<<endl;
    cout <<"Sumation of Odd = "  << odd <<endl;

    return 0;
}