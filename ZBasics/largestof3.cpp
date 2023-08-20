#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the no.s\n";

    cin>>a;
    cin>>b;
    cin>>c; // or cin>>a>>b>>c;

    if(a>b){
        if(c>a){
            cout<<"largest no. is :"<<c;
        }
        else{
            cout<<"largest no. is :"<<a;
        }
    }
    else{
        if(c>b){
            cout<<"largest no. is :"<<c;
        }
        else{
            cout<<"largest no. is :"<<b;
        }
    }

    return 0;
}