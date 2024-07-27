#include<iostream>

using namespace std;

int main(){

    int arr[9] = { 4,2,8,0,5,7,1,3,9 };
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++){
        for (int j = 0; j < len - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}