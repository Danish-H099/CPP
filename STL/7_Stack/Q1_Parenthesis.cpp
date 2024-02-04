


#include <iostream>
#include <stack>
using namespace std;
 
class Solution {
public:
    bool isValid(string s) {
        stack<char> st; 
        for (char c : s) { 
            if (c == '(' || c == '{' || c == '[') { 
                st.push(c); 
            } else { 
                if (st.empty() || 
                    (c == ')' && st.top() != '(') || 
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[')) {
                    return false; 
                }
                st.pop(); 
            }
        }
        return st.empty(); 
    }
};

int main(){
    Solution A;
    bool a=A.isValid("(]");
    cout<<a<<endl;
    Solution B;
    bool b=B.isValid("([]())");
    cout<<b;
return 0;
}