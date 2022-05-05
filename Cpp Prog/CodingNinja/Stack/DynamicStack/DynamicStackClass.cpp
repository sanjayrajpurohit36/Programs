/*
    Implement a dynamic stack class where there would be no fixed size of the stack
*/

#include<iostream>

using namespace std;


class Stack
{
    private:
        int nextIndex;
        int *arr;
        int capacity;
    public:
        // constructor
        Stack()
        {
            nextIndex = 0;
            capacity = 4;
            arr = new int[capacity];
        }

        /*
            Function to return the size of the stack
        */
        int getSize()
        {
            return nextIndex;
        }

        /*
            Function to check whether the stack is empty or not
        */
        bool isEmpty()
        {
            return nextIndex == 0;
        }

        /*
            Function to push element into stack
        */
        void push(int element)
        {
            if (nextIndex == capacity)
            {
                int *newArr = new int[2 * capacity];
                for (int i = 0; i < nextIndex; i++)
                {
                    newArr[i] = arr[i];
                }
                delete[] arr;
                arr = newArr;
                capacity = 2 * capacity;
            }
            arr[nextIndex++] = element;
        }

        /*
            Function to pop element from the stack
        */
        int pop()
        {
            if (isEmpty())
            {
                cout << "Underflow" << endl;
                return INT_MIN;
            }
            nextIndex--;
            return arr[nextIndex];
        }
        /*
            Function to return the top element of the stack
        */
        int top()
        {
            return arr[nextIndex - 1];
        }
};