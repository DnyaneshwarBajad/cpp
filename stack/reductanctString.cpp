#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool hasBalacedBrackets(string &s) {
    stack<char> brackets;
    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{') {
            brackets.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (brackets.empty()) {
                return false; // If there's a closing bracket without corresponding opening bracket
            }
            char top = brackets.top();
            if ((ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '}' && top == '{')) {
                brackets.pop();
            } else {
                return false; // Mismatched brackets
            }
        }
    }
    return brackets.empty(); // If there are extra opening brackets
}

int main() {
    string str = "()";
    
    if (hasBalacedBrackets(str)) {
        cout << "The string has balanced brackets.\n";
    } else {
        cout << "The string does not have balanced brackets.\n";
    }

    return 0;
}
