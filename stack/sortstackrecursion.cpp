#include <iostream>
#include <stack>
using namespace std;

void insertelement(stack<int> &s, int temp) {
    if (s.empty() || s.top() <= temp) {
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insertelement(s, temp);
    s.push(val);
}

void sort(stack<int> &s) {
    if (s.empty() || s.size() == 1) {
        return;
    }
    int temp = s.top();
    s.pop();
    sort(s);
    insertelement(s, temp);
}

int main() {
    stack<int> s;
    s.push(2);
    s.push(1);
    s.push(4);
    s.push(3);
    sort(s);
    cout << "Final sorted stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    // Add this line to prevent the console from closing immediately
    //system("pause");

    return 0;
}

