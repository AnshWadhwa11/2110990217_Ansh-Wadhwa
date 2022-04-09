#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i =1;i<=num;i++){
        for(int k =1;k<=num-i;k++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        for(int j = 1;j<i;j++){
            cout<<i-j;
        }
        cout<<endl;
    }
    return 0;
}