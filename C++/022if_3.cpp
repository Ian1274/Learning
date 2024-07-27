#include<iostream>

using namespace std;


int main(){

    int a = 10, b = 20, c = 30;
    c = a > b ? a : b; 
    cout << " c : " << c << endl;

    ( a > b ? a : b) = 100;
    cout << " a : " << a << endl << " b : " << b << endl << " c : " << c << endl;

    return 0;
}