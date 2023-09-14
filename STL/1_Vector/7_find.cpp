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

    vector<int> vect={2,3,5,9,78,23,55,77,29};

    int searchValue = 55;
    // Searches for an element in a container and returns an iterator to it.

    auto result = find(vect.begin(), vect.end(), searchValue);

    if (result != vect.end()) {
        cout << "Found " << searchValue << " at position " << (result - vect.begin())+1 << endl;
    } else {
        std::cout << searchValue << " not found." << endl;
    }

return 0;
}