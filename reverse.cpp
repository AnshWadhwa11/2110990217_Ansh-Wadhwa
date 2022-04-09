#include<iostream>
using namespace std;

int main(){
    int num,b,rev = 0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num>0){
        b = num % 10;
        num = num / 10;

        rev = rev * 10 + b;
    }
    cout<<"The reverse number is: "<<rev;
    return 0;
}