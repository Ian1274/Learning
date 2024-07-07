# include<iostream>
using namespace std;

//1. # define
# define day 7

int main(){

    cout << "a week have " << day << " days" << endl;
    // day = 8 ; //error: it cann't be modified

    // 2. const modifier variables
    const int month = 12;
    cout << "a year have " << month << " months" << endl;
    // month = 13 ; //error: it cann't be modified
    return 0;
}