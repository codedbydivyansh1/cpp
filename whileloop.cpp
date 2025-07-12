// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int i=1;
//     cout<<"Enter a number: ";
//     cin>>n;
//     while(i<=n){
//         if(i%2==0){
//             cout<<i<<" ";

//         }i++;
//     }
// }
// sum of n natural numbers
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main(){
    int n=10;
    int i;
    int sum;
    sum=0;
    while(i<=n){
        sum=sum+i;
        cout<<sum<<" ";
        i++;

    }
}