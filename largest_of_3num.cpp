#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "enter a number 1 : ";
    cin >> a;
    cout << "enter a number 2 : ";
    cin >> b;
    cout << "enter a number 3 : ";
    cin >> c;
    if(a>b && a>c){
        cout<< "a is largest!";
    }
    else if(b>a && b>c){
        cout<< "b is largest!";
    } 
    else if(c>a && c>b){
        cout<< "c is largest!";
    }
}