#include <iostream>
#include <stack>
using namespace std;
void deletemiddle(stack<int> &st,int middle){
    int count =0;
    stack <int> tempstack;
    while(!st.empty()){
        if(count!=middle){
            tempstack.push(st.top());
        }
        st.pop();
        count ++;

    }
    // restore
     while(!tempstack.empty()){
        st.push(tempstack.top());
        tempstack.pop();

     }
}
void displayStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "Original stack: ";
    displayStack(st);

    int size = st.size();
    int middle = size / 2;

    deletemiddle(st, middle);

    cout << "Stack after deleting middle element: ";
    displayStack(st);

    return 0;
}