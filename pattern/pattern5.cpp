#include<iostream>
using namespace std;

int main(){
    int num,n = 1;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i = 1;i<=num;i++){
        for(int j = 1;j<=i;j++){
            
            cout<<n++;
        }
        cout<<endl;
    }
    return 0;
}