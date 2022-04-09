#include<iostream>
using namespace std;

int main(){
    float num,sum=0;
    cout<<"Enter the number: ";
    cin>>num;

    for(float i = 1;i<=num;i++){
        float n = 1/i;
        cout<<n<<endl;
        sum = sum + n ;
    }
    cout<<"The sum of above series is: "<<sum;
    return 0;
}