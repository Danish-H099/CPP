#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 2, 3, 2, 4, 2, 5};
    int countValue = 2;
    
    int   coun = count(numbers.begin(), numbers.end(), countValue);

    cout << countValue << " appears " << coun << " times." << endl;
    
    return 0;
}