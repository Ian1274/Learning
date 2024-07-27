#include<iostream>

using namespace std;

int main(){

    // 三种定义数组的方式
    int a[5] = {1,2,3,4,5};
    int b[] = {1,2,3,4,5,6,7,8,9,10};
    int c[5] = {1,2,3}; // 剩余元素自动初始化为0
    int d[5] = {};

    cout << a[0] << endl; // 输出第一个元素
    cout << b[0] << endl;
    cout << c[0] << endl;
    cout << d[0] << endl;

    

    return 0;
}