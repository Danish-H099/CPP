#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

    cout << "Sum: " << sum << endl;
    
    return 0;
}