// LeetCode 20: Valid Parentheses
// Check if brackets are properly matched and closed.
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    unordered_map<char,char> pairs = {{')','('},{']','['},{'}','{'}};
    for (char c : s) {
        if (c=='('||c=='['||c=='{') st.push(c);
        else {
            if (st.empty() || st.top() != pairs[c]) return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    cout << boolalpha << isValid("()[]{}") << endl; // true
    cout << boolalpha << isValid("(]") << endl;      // false
}
