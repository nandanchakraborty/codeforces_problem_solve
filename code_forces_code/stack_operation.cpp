#include <bits/stdc++.h>
using namespace std;

stack<char> myStack;
int priority(char x) {
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}
int main() {
    char exp[100];
    char *e, x;
    cout << "Enter the expression : ";
    cin >> exp;
    cout << "\n";
    e = exp;
    while (*e != '\0') {
        if (isalnum(*e))
            cout << *e << ' ';
        else if (*e == '(')
            myStack.push(*e);
        else if (*e == ')') {
            while (!myStack.empty() && (x = myStack.top()) != '(') {
                cout << x << ' ';
                myStack.pop();
            }
            if (!myStack.empty() && myStack.top() == '(')
                myStack.pop();
        } else {
while (!myStack.empty() && priority(myStack.top()) >= priority(*e)) {
                cout << myStack.top() << ' ';
                myStack.pop();
            }
            myStack.push(*e);
        }
        e++;
    }
    while (!myStack.empty()) {
        cout << myStack.top() << ' ';
        myStack.pop();
    }

    return 0;
}
