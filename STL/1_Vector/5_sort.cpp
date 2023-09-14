#include <iostream>
#include <vector>
#include <algorithm>
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

    int element,size;
    cout<<"Enter the size of array :";
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i+1<<" :";
        cin>>element;
        vect.push_back(element);
    }

    display(vect);

    sort(vect.begin(), vect.end());
    
    // Displaying the Sorted array
    display(vect);

return 0;
}