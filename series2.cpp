#include<iostream>
using namespace std;

int main(){
    int n,sum = 0,tsum = 0;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<j;
            if(j<i){
                cout<<"+";
            }
        }
        cout<<"=";
        sum = sum  + i;
        tsum =tsum + sum;
        cout<<sum<<endl;
    }
    cout<<"The sum of above series is: "<<tsum;
    return 0;
}