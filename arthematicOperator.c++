#include <iostream>
using namespace std;
int main(){
    char operation;
    int num1,num2;
    double Result;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    cout<<"Enter operation(+,-,*,/)";
    cin>>operation;
    switch(operation){
        case '+': Result=num1+num2;
        break;
        case '-': Result=num1-num2;
        break;
        case '*': Result=num1*num2;
        break;
        case '/': if(num2==0){
            return 0;
            else{
            Result=num1/num2;}
        break;
    }
    default:cout<<"invalid choice";
    }
    cout<<"result:"<<Result;
    return 0;
}