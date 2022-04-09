#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int num,fact = 1,x;
    float sum = 1;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the value of x: ";
    cin>>x;

    for(float i=1; i<num ;i++){
        fact = fact * i;
        float a = pow(x,i) / fact;
        cout<<a<<endl;
        sum = sum + a;
        // cout<<a<<endl;
        // cout<< fact<<endl;
    }
    cout<<sum;
    return 0;
}