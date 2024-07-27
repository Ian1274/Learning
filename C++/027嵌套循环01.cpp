#include<iostream>

using namespace std;


int main(){

    for (int i = 1; i <= 9; i++) //外层循环控制行数
    {
        for (int j = 1; j <= i; j++) //内层循环控制每行打印的个数
        {
            cout << j << "*" << i << "=" << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}