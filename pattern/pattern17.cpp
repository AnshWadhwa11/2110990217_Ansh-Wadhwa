#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i = 0;i<num;i++){
        for(int k = 1;k<num-i;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<(pow(2,j));
        }
        for(int j = 0;j<i;j++){
            cout<<(pow(2,i-j-1)) ;
        }
        cout<<endl;
    }
    return 0;
}