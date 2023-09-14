#include <iostream>
#include <vector>
#include <iterator>

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

    vector<int> :: iterator iter = vect.begin(); // Using begin () points the iterator to the starting of the vector. 
    vect.insert(iter,566); // 566 2 3 5 9
    
    
    vector<int> :: iterator iter2 = vect.end(); // points the iterator to the ending of the vector
    vect.insert(iter2,566);   // 566 2 3 5 9 566
    // We can now increment the pointer according to our choice and insert any element at that position.
    vect.insert(iter2-3,566); // 566 2 255 3 5 9 566
    
    display(vect);
    cout<<*(iter2); // gives the value at iter2 i.e 5th element ->9
return 0;
}