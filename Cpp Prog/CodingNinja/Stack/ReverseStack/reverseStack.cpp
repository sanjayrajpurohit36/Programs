#include <iostream>
#include <stack>
using namespace std;

void reverseStackHelper(stack<int> &input, stack<int> &extra, int size)
{
    if(size == -1) {
        return;
    }
    int topElement = input.top();
    input.pop();
    reverseStackHelper(input, extra, size - 1);
    extra.push(topElement);
}

void reverseStack(stack<int> &input, stack<int> &extra) {
    // Write your code here
    if(input.size() == 0) return;
    else {
        reverseStackHelper(input, extra, input.size() - 1);
        while(!extra.empty()) {
            input.push(extra.top());
            extra.pop();
        }
    }
}

int main() {
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
}