#include<iostream>
using namespace std;

int main(){
    int num,a,even = 0,odd = 0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num>0){
    a = num % 10;
    num = num /10;
    if(a%2 == 0){
        even = even + a;
    }
    else{
        odd = odd + a;
    }
    }
    cout<<"Sum of even numbers is: "<<even<<endl;
    cout<<"Sum of odd numbers is: "<<odd<<endl;
    return 0;
}