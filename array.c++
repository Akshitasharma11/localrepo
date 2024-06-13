#include<iostream>
using namespace std;
#define max_size 100
int main(){
    int arr[max_size];
    int size,i,sum=0;
     cout<<"Enter size of array";
     cin>>size;
     cout<<"Enter "<< size <<"elements of array";
     for(i=0;i<size;i++){
        cin>>arr[i];
     }
     for(i=0;i<size;i++){
        sum= sum+arr[i];
     }
     cout<<"Sum of elements of array:"<<sum;
     return 0;
}