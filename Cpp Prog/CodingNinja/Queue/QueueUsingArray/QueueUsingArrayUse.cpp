#include<iostream>
#include "QueueUsingArray.h"

using namespace std;

int main() {
    QueueUsingArray<int> Q(5); // passing 5 as the capacity of the queue
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);
    Q.enqueue(40);
    Q.enqueue(50);

    cout << Q.front() << endl;
    Q.dqeueue();
    Q.dqeueue();
    Q.dqeueue();
    Q.dqeueue();
    
    cout << Q.front() << endl;
    Q.enqueue(10);
    cout << Q.front() << endl;

    return 0;
}