#include<iostream>
using namespace std;

int main(){
    int num,a,rev =0,n = 1;
    cout<<"Enter the decimal number: ";
    cin>>num;
    
    for(int i =1;num>0;i++){ 
        a = num % 10;
        num = num / 10;
        rev = rev + a * n;
        n = n * 2; 
    }
    cout<<rev;
    return 0;
}