//WAP to find cost according to weight 
#include<iostream>
using namespace std;
int main(){
    int weight,cost;
    cout<<"Enter weight";
    cin>>weight;
    if(weight<=5){
        cost=300;
    }
    else if(weight>=5&&weight<=10){
        cost=500;
    }
    else if(weight>=10&&weight<=20){
        cost=750;
    }
    else{
        cout<<"incorrect/invalid weight";
    }
    cout<<"The cost is:"<<cost;
    return 0;
}