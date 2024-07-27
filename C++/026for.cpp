#include<iostream>

using namespace std;

int main(){

    int count = 0;

    for (int a = 0; a < 100; a++){


        if (a/10 == 7){
            cout << a << "逢七过" << endl;
            count++;
        }
        else if (a%10 == 7){
            cout << a << "逢七过" << endl;
            count++;
        }
        else if (a%7 ==0 ){
            cout << a << "逢七过" << endl;
            count++;
        }
        
        else{
            cout << a << endl;
        }
        
    }
    cout << "一共有" << count << "个数字是逢七过的" << endl;

    return 0;
}