#include<iostream>

using namespace std;

// 利用sizeof关键字可以统计数据类型所占内存大小

int main(){

    cout << "short memory space: " << sizeof(short) << endl;
    cout << "int memory space: " << sizeof(int) << endl;
    cout << "long memory space: " << sizeof(long) << endl;
    cout << "long long  memory space:" << sizeof(long long) << endl;
    
    system("pause");

    return 0;
} 