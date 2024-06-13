#include <iostream>
using namespace std;
// #define max_size 100
int main (){
    int max_size;
    int *arr;
    cout<<"Enter the size of array";
    cin>>max_size;
    arr=new int[max_size];
    int size,i,sum=0;
    cout<<"Enter the size of array";
    cin>>size;
    cout<<"enter"<<size<<"elements";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    sum=sum+arr[i];
    cout<<"sum of the elements is: "<< sum;
    return 0;
}