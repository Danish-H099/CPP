#include <iostream>
#include <vector>
using namespace std;
 
 template<class T>
 void display(T arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
 }

int main(){

    vector<int> vect={2,3,5,9};

    display(vect);
    vect.pop_back(); // Deletes the last element of array
    display(vect);

return 0;
}