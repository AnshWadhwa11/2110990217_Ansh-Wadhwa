#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i = 0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<i-j<<" ";
        }
        for(int j = 1;j<num-i;j++){
            cout<<i+j<<" ";
        }
        cout<<endl;
    }
    return 0;
}