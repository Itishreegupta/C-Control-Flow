#include <iostream>
using namespace std;
int main(){
    int year;
    cout << "enter a year: ";
    cin >> year;
    if(year%400 == 0){
        cout<< "The year is a leap year!";
    }
    else if(year%100 == 0){
        cout<< "The year is not a leap year!";
    }
    else if(year%4 == 0){
        cout<< "The year is a leap year!";
    }
    else{
        cout<< "The year is not a leap year!";
    }
}