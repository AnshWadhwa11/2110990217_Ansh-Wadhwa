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
            cout<<"*";
        }
        for(int j=1;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
        }
        for(int i =1;i<num;i++){
            for(int k = 1;k<=i;k++){
                cout<<" ";
            }
            for(int j =1;j<=num-i;j++){
                cout<<"*";
            }
            for(int j =1;j<num-i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    return 0;
}