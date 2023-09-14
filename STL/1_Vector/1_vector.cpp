// Vector is a dynamic array that can grow and shrink in size.

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

    vector<int> vect;
    // vector<char> vect;

    int element;
    // char element;
    int size;
    cout<<"Enter the size of array :";
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i+1<<":";
        cin>>element;
        vect.push_back(element);
    }

    display(vect);

    vector<char> vec2(4);  // 4-element character vector
    display(vec2); // Empty vector
    vector<char> vec3(vec2); // 4-element character vector from vec2
    display(vec3); // same as vector vec2
    vector<int> vec4(6,3); // 6-element vector of 3s
    display(vec4); // 3 3 3 3 3 3

return 0;
}