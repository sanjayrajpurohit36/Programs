#include<iostream>
#include "DynamicQueue.h"

using namespace std;

int main() {
    DynamicQueue<int> Q(5); // passing 5 as the capacity of the queue
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);
    Q.enqueue(40);
    Q.enqueue(50);
    Q.enqueue(60);

    cout << Q.front() << endl;
    cout << "dequeue : " << Q.dqeueue() << endl;
    cout << "dequeue : " << Q.dqeueue() << endl;
    cout << "dequeue : " << Q.dqeueue() << endl;
    cout << "dequeue : " << Q.dqeueue() << endl;
    
    cout <<"Front : " << Q.front() << endl;
    Q.enqueue(10);
    cout <<"Front : " << Q.front() << endl;

    return 0;
}