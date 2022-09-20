#include<iostream>
using namespace std;

int main(){
    unsigned num1,num2;
    cin>> num1 >> num2;
    if (num1 > 1000000000 || num2 > 1000000000){
        cout<< "The numbers are too big"<< endl;
    }
    cout<< num1+num2;
    return 0;
}