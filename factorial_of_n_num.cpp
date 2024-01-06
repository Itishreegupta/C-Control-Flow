#include <iostream>
using namespace std;
int main(){
    int num, fact = 1;
    cout << "enter a number: " << endl;
    cin >> num;

    for(int i = 1; i<= num; i = i+1){
        fact = fact * i;
    }
     cout<< "fact is : " << fact << endl;

   
}