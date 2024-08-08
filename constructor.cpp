#include<bits/stdc++.h>
using namespace std;

class Complex{
 int a,b;
 public:
 Complex(void);
 void printNumber(){
    cout<<a<<"+"<<b<<"i"<<endl;
 }
};
 Complex::Complex(void){
    a = 11;
    b = 1;
 }

int main(){
    Complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;

}