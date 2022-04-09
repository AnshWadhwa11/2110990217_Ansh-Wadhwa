#include<iostream>
using namespace std;

int main(){
    int num,n,m = 0,a = 0,b = 0;
    cout<<"Enter the number: ";
    cin>>num;
    
    for(int i = 1; i<=num;i++){
        cin>>n;
        if(m<n){
            b = b+1;
        }
        else{
            a = a + 1;
        }
        m = n;
    }
        if(a>0){
            cout<<"false";
        }
        else{
            cout<<"true";
        }
    return 0;
}