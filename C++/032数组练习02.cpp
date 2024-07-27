#include<iostream>

using namespace std;

int main(){

    int arr[5] = {300,350,200,400,250};
    int arr_max = arr[0];

    for (int i = 0;i < (sizeof(arr) / sizeof(arr[0])); i++){

        if (arr[i] > arr_max){
            arr_max = arr[i];
        }

    }


    cout << "最大值为：" << arr_max << endl;

    return 0;
}