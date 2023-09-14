#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;
 
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){

    list<int> list1; //empty list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);
    // 5 7 1 9 12 


    list<int> list2(3);  //empty list of length 3
    list<int> :: iterator it = list2.begin();
    *it = 5;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;
 
    display(list2);
    // 5 6 9

    // Sort
    list1.sort(); // Sort in ascending order
    display(list1);
    // 1 5 7 9 12

    // Reverse
    list1.reverse(); // Reverses the order of elements in the list.
     display(list1);
    // 12 9 7 5 1 

    // Push & Pop 
    list1.push_back(2);
    display(list1);
    // 12 9 7 5 1 2 
    list1.push_front(9);
    display(list1);
    // 9 12 9 7 5 1 2 
    list1.pop_back();
    display(list1);
    // 9 12 9 7 5 1
    list1.pop_front();
    display(list1);
    // 12 9 7 5 1 

    // Remove
    list1.remove(9); //  Removes all occurrences of 9
    display(list1);
    //12 7 5 1 

    // Merge
    list<int> result; // list1-> 12 7 5 1 || list2-> 5 6 9
    merge(list1.begin(), list1.end(), list2.begin(), list2.end(),back_inserter(result));
    display(result);
    // 5 6 9 12 7 5 1 

    //Copy
    list<int> destination_list;
    copy(result.begin(), result.end(), back_inserter(destination_list));
     display(destination_list); 
    // 5 6 9 12 7 5 1 

    // Unique
    result.unique(); // Removes consecutive duplicate elements from the list.
    display(result);
    // 5 6 9 12 7 1 


return 0;
}