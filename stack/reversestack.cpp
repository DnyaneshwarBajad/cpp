#include <iostream>
#include <stack>
using namespace std;
void reverseStack(stack<int> &s)
{

    // move all to temp stack
    stack<int> tempStack;
    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        tempStack.push(temp);
    }

    // Move all elements from temporary stack back to original stack

    while (!tempStack.empty())
    {
        int temp = tempStack.top();
        tempStack.pop();
        s.push(temp);
    }
}
int main()
{
    stack<int> a;
    a.push(0);
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);

    cout << "Original stack: ";
    while (!a.empty())
    {
        cout << a.top() << " ";
        a.pop();
    }

    // Refill the stack
    a.push(0);
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    
    cout << endl;

    // Reverse the stack
    reverseStack(a);
    
    cout << "Reversed stack: ";
    while (!a.empty())
    {
        cout << a.top() << " ";
        a.pop();
    }

    return 0;
}
