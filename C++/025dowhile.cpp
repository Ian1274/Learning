#include<iostream>

using namespace std;

int main(){

    int i=100;
    do{
        int a = i/100;
        int b = i/10%10;
        int c = i%10;

        if (a*a*a + b*b*b + c*c*c == i){
            cout<<i<<endl;
        }
        i++;
    }while(i<=999);

    return 0;
}