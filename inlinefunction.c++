#include<iostream>
using namespace std;
inline int max(int a,int b){
    return (a>b)? a:b;
}
int main(){
    int a=5,b=10;
    int c=max(a,b);
    cout<<c;
}