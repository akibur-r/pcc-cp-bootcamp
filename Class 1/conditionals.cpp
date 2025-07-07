#include<iostream> //header file -- standard input output
using namespace std; //access the namespace or function

int main() {
    int a = 45;

    //---Conditional Statements----------
    //switch-case
    //if
    //if-else
    //if-else ladder

    // 1. a ki 20?
    // 2. a ki 35?
    // 3. a ki 40?

    switch(a) {
        case 20:
            cout << "1 number argument true" << '\n';
            break;
        case 35:
            cout << "2 number argument true" << '\n';
            break;
        case 40:
            cout << "3 number argument true" << '\n';
            break;
        default:
            cout << "Kono argument e true na" << '\n';
    }










    // 1. b ki a er cheye boro? ---> ha/na
    // 2. b ki c er cheye boro? ---> ha/na

    //if
    //if-else
    //if-else ladder

    // if(b > a) {
    //     cout << "1 number argument true" << '\n';
    // }
    // else if(b > c) {
    //     cout << "2 number argument true" << '\n';
    // }
    // else {
    //     cout << "Na b, c er cheye boro na" << '\n';
    // }


    // // a er value b er value er cheye boro
    // if(a > b) { //jodi argument ta sotti hoy, tahole vitorer kajgulo korbe
    //     cout << "Haa thik bolsen" << '\n';
    // }
    // else {//jodi argument mittha hoy, tahole kisu ekta koro
    //     cout << "Naaaa vai apni tw mittha bolsen" << '\n';
    // }

    //syntax
    // (a > b) --> argument

    return 0;
}