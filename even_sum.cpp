#include<iostream>
using namespace std;

int main(){
    int start,end,sum = 0;
    cout<<"Enter the starting point: ";
    cin>>start;
    cout<<"Enter the ending point : ";
    cin>>end;

    for(int i = start;i<=end;i++){
        if(i%2 == 0){
            cout<<i<<endl;
            sum = sum + i;
        }
    }
    cout<<"Sum of above series is: "<<sum;
    return 0;
}