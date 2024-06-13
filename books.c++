#include<iostream>
#include<string>
using namespace std;
#define max_size 100
//Structure
/// @brief 
struct book{
    char title[50];
    char author[50];
    float price;
};
int main(){
struct book books[max_size];
int size,i;
cout<<"enter the number of books";
cin>>size;
cout<<"enter the information about the book";
for(i=0;i<size;i++){
    cout<<endl<<"Book"<<i+1<<endl;
    cout<<"Title";
    cin.ignore();
    cin.getline(books[i].title,50);
    cout<<"Author";
    cin.getline(books[i].author,50);
    cout<<"price";
    cin>>books[i].price;
    cin.ignore();
}
cout<<"Books that cost more than $20:";
for(i=0;i<size;i++){
    if(books[i].price<20.0){
        cout<<"Title:"<<books[i].title<<endl;
        cout<<"Author:"<<books[i].author<<endl;
        cout<<"Price:"<<books[i].price<<endl;
    }
}
return 0;
}