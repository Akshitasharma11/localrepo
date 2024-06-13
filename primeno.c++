#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number to check whether it is prime or not";
    cin>>n;
    for(i=2;i<=n/2;i++){
        if(n %i==0){
            cout<<"Number is not prime";
            break;
        }
        else{
            cout<<"Number is prime";
            break;
        }
    }
    return 0;
}