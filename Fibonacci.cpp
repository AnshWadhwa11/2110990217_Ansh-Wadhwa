#include<iostream>
using namespace std;

int main(){
    int num,x = 0,y = 1,z = 0;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i =1;i<=num;i++){
        x = y;
        y = z;
        z = x + y;
    }
        cout<< z<<endl;
    return 0;
}