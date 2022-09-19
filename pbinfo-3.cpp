#include<iostream>
using namespace std;

int main(){
    unsigned n;
    cin >> n;
    if(n >= 1000000000 || n <= 0){
        cout<<"numarul nu este in limite"<<endl;
    }else{
        cout<< n;
        if(n%2 == 0){
            cout<<" este par"<<endl;
        }else{
            cout<<" este impar"<<endl;
        }}
    return 0;
}