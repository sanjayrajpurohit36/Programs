/* 
    Queue using array
*/
#include<iostream>

using namespace std;
template <typename T>

class QueueUsingArray
{
    int size;
    T *data;
    int frontIndex;
    int nextIndex;
    int capacity;

public:
    QueueUsingArray(int size)
    {
        capacity = size;
        data = new T[size];
        nextIndex = 0;
        frontIndex = -1;
        this->size = 0;
    }

        int getSize () {
            return size;
        }

        bool isEmpty() {
            return size == 0;
        }

        int front() {
            if(isEmpty()) {
                return -1;
            }
            return data[frontIndex];
        }

        void enqueue(T d) {
            if (size == capacity)
            {
                cout << "Queue is full" << endl;
                return;
            }
            data[nextIndex] = d;
            nextIndex = (1 + nextIndex) % capacity;
            if(frontIndex == -1) {
                frontIndex++;
            }
            size++;
        }

        int dqeueue() {
            if(isEmpty()) {
                // if queue has no elements then we can't delete any element from it
                cout << "Queue is Empty!" << endl;
                return 0;
            }
            int deletedElement = data[frontIndex];
            frontIndex = (frontIndex + 1) % capacity;
            size--;
            if(isEmpty()) {
                // if queue becomes empty then we're resetting the pointers
                resetPointers();
            }
            return deletedElement;
        }

        void resetPointers() {
            frontIndex = -1;
            nextIndex = 0;
        }
};