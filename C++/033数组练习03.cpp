#include<iostream>

using namespace std;

int main(){

    int arr[] = {1, 3, 2, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // 打印原数组arr
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int start = 0, end = n - 1; start < end; start++, end--) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }

    // 打印逆序数组arr
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}