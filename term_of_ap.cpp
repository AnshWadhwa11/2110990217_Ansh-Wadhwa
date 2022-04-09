#include<iostream>
using namespace std;

int main(){
    int num,ans,n = 2;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i = 1;i<=num; i++){
        if(n == i){
            n = n+4;
            num = num+1;
            continue;
        }
        else{
        ans = 3*i + 2;
        cout<<ans<<endl;
        }
    }
    return 0;
}