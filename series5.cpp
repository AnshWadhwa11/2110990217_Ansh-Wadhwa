#include<iostream>
using namespace std;

int main(){
    int num,sum = 0,a = 1;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i =1;i<=num;i++){
        sum = sum + a;
        cout<<a<<endl;
        a = a*10 + 1;
    }
    cout<<"Sum of the above series is : "<<sum;
    return 0;
}