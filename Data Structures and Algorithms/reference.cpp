#include<iostream>

int main(){
using namespace std;

    int a = 10;
    int &r = a;

    cout<<a<<endl;
    r++;
    cout<<r<<endl;
    cout<<a<<endl;
}