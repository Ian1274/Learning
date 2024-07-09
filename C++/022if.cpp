#include<iostream>

using namespace std;


int main(){

    int score = 0;

    cout << "Enter a Score: "<< endl;
    cin >> score;

    if (score >= 600){
        cout << "good" << endl;
    }
    else if (500 <= score < 600)
    {
        cout << "pass" << endl;
    }
    else if (score <= 500)
    {
        cout << "bad" << endl;
    }
    
    
    return 0;
}