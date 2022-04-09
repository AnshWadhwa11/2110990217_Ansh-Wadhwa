#include<iostream>
using namespace std;

int main(){
    int num,n = 0;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i = 1;i<=num;i++){
        for(int k = 1;k<=num-i;k++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            n = n + 1; 
            cout<<n<<" ";
        }
        cout<<endl;
    }
    return 0;
}