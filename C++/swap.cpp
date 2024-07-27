//swap.cpp文件
#include "swap.h"

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}


int main() {

	int a = 100;
	int b = 200;
	swap(a, b);

	system("pause");

	return 0;
}
