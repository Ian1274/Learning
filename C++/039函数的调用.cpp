#include <iostream>
using namespace std;

//定义一个加法函数
int add(int a, int b) { return a + b; }

int main() { 
    
    int a = 10, b = 20; 

    //调用加法函数
    cout << "a + b = " << add(a, b) << endl;
    
    int sum = add(a, b);  //也可以将结果赋值给变量
    cout << "sum = " << sum << endl;
    
    
    return 0; 
}