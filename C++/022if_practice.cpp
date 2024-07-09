#include<iostream>

using namespace std;

int main (){

    float p1 = 0;
    float p2 = 0;
    float p3 = 0;

    cout << "enter p1 weight: " << endl;
    cin >> p1;
    cout << "enter p2 weight: " << endl;
    cin >> p2;
    cout << "enter p3 weight: " << endl;
    cin >> p3;

    if (p1 > p2){
        if (p1 > p3){
            cout << "p1 is the heaviest" << endl;
        }
        else if (p1 < p3)
        {
            cout << "p3 is the heaviest" << endl;
        }
        else if (p1 == p3)
        {
            cout << "p1/p3 is the heaviest" << endl;
        }
        
        
    }
    else if (p1 < p2)
    {
        if (p1 >= p3){
            cout << "p2 is the heaviest" << endl;
        }
        else if (p1 < p3)
        {
            if (p2 <= p3){
                cout << "p3 is the heaviest" << endl;
            }
            else if (p2 >= p3)
            {
                cout << "p2 is the heaviest" << endl;
            }
            
        }
        
    }
    else if (p1 == p2)
    {
        if (p2 < p3){
                cout << "p3 is the heaviest" << endl;
            }
        else if (p2 > p3)
            {
                cout << "p2 is the heaviest" << endl;
            }
        else
        {
            cout << "p123 is the heaviest" << endl;
        }
        
    }
    
    


    return 0;

}