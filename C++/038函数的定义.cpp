/*

返回值类型 函数名 （参数列表）
{

    函数体语句

    return表达式

}

*/

#include <iostream>
using namespace std;

//定义一个加法函数
int add(int a, int b) { return a + b; }

int main() { 
    
    int a = 10, b = 20; 
    cout << add(a, b) << endl;
    
    
    return 0; 
}