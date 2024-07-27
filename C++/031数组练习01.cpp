#include<iostream>

using namespace std;

int main(){

    //创建整数数组，长度为10
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    //打印整个数组所占的内存空间
    cout << "数组所占内存空间为：" << sizeof(arr) << "字节" << endl;
    cout << "数组每个元素所占内存空间为：" << sizeof(arr[0]) << "字节" << endl;
    cout << "数组长度为：" << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "数组最后一个元素的值为：" << arr[sizeof(arr) / sizeof(arr[0]) - 1] << endl;

    //通过数组名获取到数组首地址
    cout << "数组首地址为：" << (int)arr << endl;
    cout << "数组中第一个元素地址为： " << (int)&arr[0] << endl;
    cout << "数组中第二个元素地址为： " << (int)&arr[1] << endl;

    return 0;
}