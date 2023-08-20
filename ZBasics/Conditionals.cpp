#include <iostream>
using namespace std;

int main(){
    int money;
    cout<<"Enter the amount you have :";
    cin>>money;

    if(money>5000){
        cout<<"Neha";
    }
    else if (money>2000){
        cout<<"Shashi";
    }
    else{
        cout<<"Friends";
    }

    return 0;
}