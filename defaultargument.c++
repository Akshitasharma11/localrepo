#include<iostream>
using namespace std;
void printMessage(string message="Hello world"){
    cout<<message<<endl;
}
int main(){
    printMessage();
    printMessage ("Goodbye!");
    return 0;
}