#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i = 1;i<=num;i++){
        for(int k = 1;k<i;k++){
            cout<<" ";
        }
        for(int j = 1;j<=num-i+1;j++){
            cout<<i+j-1;
        }
        cout<<endl;
    }
    return 0;
}