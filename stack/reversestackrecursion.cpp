#include <iostream>
#include <stack>
using namespace std;
// Function to insert an element at the bottom of a stack

void insertatbottom(stack<int> &s, int x)
{

    // base case
    if (s.empty())
    {
        s.push(x);
        return;
    }
    // call recursive
    int top = s.top();
    s.pop();
    insertatbottom(s, x);
    s.push(top);
}
// reverse stack
void reverseStack(stack<int> &s)
{
    // base case
    if (s.empty() || s.size() == 1)
    {
        return; 

    }
    int top = s.top();
    s.pop();
    reverseStack(s);
    insertatbottom(s, top);
}
int main(){
     stack<int> a;
    a.push(0);
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    stack<int> originalA = a;

    cout << "Original stack: "; 
    // Print original stack elements
    while (!originalA.empty()) {
        cout << originalA.top() << " ";
        originalA.pop();
    }
    cout << endl;

  reverseStack(a);
  cout << "Reversed stack: ";
    while (!a.empty()) {
        cout << a.top() << " ";
        a.pop();
    }

    return 0;
}












