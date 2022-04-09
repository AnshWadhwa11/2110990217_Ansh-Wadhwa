// #include<iostream>
// using namespace std;

// int main(){
//     int num,sum = 0;
//     cout<<"Enter the number: ";
//     cin>>num;

//     for(int i = 1;i<=num;i++){
//         cout<<i<<" ";
//         sum = sum + i;
//     }
//     cout<<endl<<sum;
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 1;
    while(n--){
        int a;
        cin>>a;
        ans *=a;
    }
    int k;
    cin>>k;
    ans =ans%k;
    cout<<ans;
    return 0;
}