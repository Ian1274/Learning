# include <iostream>

using namespace std;

// used to represent decimals

int main()
{
    float f1 = 3.14f;
    double d1 = 3.14;

    cout << "f1 = " << f1 << endl;
    cout << "d1 = " << d1 << endl;

    cout << "f1 sizeof: " << sizeof(f1) << endl;
    cout << "d1 sizeof: " << sizeof(d1) << endl;

    // scientific notation
    float f3 = 3e2;
    cout << "f3 = " << f3 << endl;
    float f4 = 3e-2;
    cout << "f4 = " << f4 << endl;

    return 0;
}