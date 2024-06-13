//Write a program named "Generic function" or "Template Swap Demo"
#include<iostream>
template <typename T>
void  T swap(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
    cout<<"after swapping:"<<a<<b;
};
int main(){
    cout<<swap<int>(10,20)<<endl;
    return 0;
}