#include<iostream>
// #include<cstdlib>

using namespace std;

int main(){
    // 写一个switch的例子
    // system("chcp 65001");

    int num;
    cout << "请输入一个数字："; 
    cin >> num;
    switch(num){
        case 1: cout << "你输入的是1"; 
        break; 
        case 2: cout << "你输入的是2"; 
        break; 
        default: cout << "你输入的不是1也不是2";}

    
    return 0;
}
