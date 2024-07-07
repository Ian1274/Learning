#include<iostream>
using namespace std;

/*

语法：char ch = 'a';
注意1：在显示字符型变量时，用单引号将字符括起来，不要用双引号
注意2：单引号内只能有一个字符，不可以是字符串
C和C++中字符型变量只占用1个字节。
字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元

*/

int main(){
    

    char ch = 'a';
    cout << "ch = " << ch << endl;
    cout << "ch sizeof: " << sizeof(ch) << endl;
    //ch = "abcde"; //错误，不可以用双引号
	//ch = 'abcde'; //错误，单引号内只能引用一个字符

    // cout << int(ch) << endl;
    cout << (int)ch << endl;
    ch = 97;
    cout << ch << endl;


    return 0;
}

/*

ASCII 码大致由以下两部分组成：

ASCII 非打印控制字符： ASCII 表上的数字 0-31 分配给了控制字符，用于控制像打印机等一些外围设备。
ASCII 打印字符：数字 32-126 分配给了能在键盘上找到的字符，当查看或打印文档时就会出现。

*/