#include<iostream>
using namespace std;
 
int main(){

    int a=2;
    float b =3.14;
    char c='a';
    bool t=1;

    cout<<"Hello\n";
    cout<<"size of int is "<<sizeof(a)<<endl; // 4
    cout<<"size of float is "<<sizeof(b)<<endl; // 4
    cout<<"size of char is "<<sizeof(c)<<endl; // 1
    cout<<"size of bool is "<<sizeof(t)<<endl; // 1

    short int y=11;
    long int z=12;
    cout<<"size of short int is "<<sizeof(y)<<endl; // 2
    cout<<"size of long int is "<<sizeof(z)<<endl; // 8

    signed int l=-1;
    short unsigned int m=-1;
    cout<<"value of l is "<<l<<endl; // -1
    cout<<"value of m is "<<m<<endl; // 65535

    return 0;
}