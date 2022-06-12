/*
        Wap to Reverse a Queue
        Sample Input:
                        1
                        6
                        1 2 3 4 5 10
        Sample Output:
                        10 5 4 3 2 1

        Sample Input: 
                        2
                        5
                        2 8 15 1 10
                        3
                        10 20 30

        Sample Outpput: 
                        10 1 15 8 2 
                        30 20 10 
/*

#include <iostream>
#include <queue>

using namespace std;

void reverseQueueHelper(queue<int> &input) {
    if(input.size() == 0) {
        return;
    }
    int frontElement = input.front();
    input.pop();
    reverseQueueHelper(input);
    input.push(frontElement);
}

void reverseQueue(queue<int> &input) {
	// Write your code here
    if(input.size() == 0) return;
    reverseQueueHelper(input);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        queue<int> q;
        int size;
        cin >> size;

        for (int i = 0, val; i < size; i++) {
            cin >> val;
            q.push(val);
        }

        reverseQueue(q);
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }

        cout << "\n";
    }
}
