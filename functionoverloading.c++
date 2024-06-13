#include<iostream>
void print(int num){
    std::cout<<"the number is:"<<num<<std::endl;
}
void print(float num){
    std::cout<<"the floating point number is"<<num<<std::endl;
}
int main(){
    int a=10;
    float b=3.14;
    print(a);
    print(b);
    return 0;

}