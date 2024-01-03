//structure 
//to add two complex number 
#include<stdio.h>
struct complex {
    int real;
    int imaginary;
} c1,c2,c3;
struct complex add(){
    c3.real=c1.real+c2.real;
    c3.imaginary=c1.imaginary+c2.imaginary;
    return(c3);
}
struct complex subtract(){
    c3.real=c1.real-c2.real;
    c3.imaginary=c1.imaginary-c2.imaginary;
    return(c3);
}
void main(){
    printf("enter first complex number\n");
    scanf("%d%d",&c1.real,&c1.imaginary);
     printf("enter second complex number\n");
    scanf("%d%d",&c2.real,&c2.imaginary);
    c3=add();
    printf("result is %d+%di\n",c3.real,c3.imaginary);
    c3=subtract();
    printf("result is %d-%di\n",c3.real,c3.imaginary);

}
