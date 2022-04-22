/* 
    Create a class DynamicArray which allows user to enter n no of elements in the array
*/

#include<iostream>
using namespace std;

class DynamicArray
{
private:
    int *arr;
    int nextIndex;
    int capacity;

public:
    DynamicArray()
    {
        // initializing the variables in default constructor.
        nextIndex = 0;
        capacity = 5;
        arr = new int[capacity]; // created an dynamic array of size 5
    }

    // Creating our own copy constructor
    DynamicArray(DynamicArray const &d2)
    {
        nextIndex = d2.nextIndex;
        capacity = d2.capacity;
        arr = new int[capacity];

        for (int i = 0; i < nextIndex; i++) {
            arr[i] = d2.arr[i];
        }
    }
    
    //Creating out own copy assignment operator
    void operator=(Dynamic Array const &d2) {
        nextIndex = d2.nextIndex;
        capacity = d2.capacity;
        arr = new int[capacity];
        
        for (int i = 0; i < nextIndex; i++) {
            arr[i] = d2.arr[i];
        }
    }

    void add(int element)
    {
        if (nextIndex == capacity)
        { // if nextIndex reaches to the capacity of the array which means we need to create the new big size aray
            int *newArr = new int[2 * capacity];
            for (int i = 0; i < nextIndex; i += 1)
            {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }
        arr[nextIndex] = element;
        nextIndex++;
    }

    /*
        Function to insert the element at the given index if the index <= nextIndex else return -1;
    */
    void replaceElement(int index, int element)
    {
        if (index <= nextIndex)
        {
            arr[index] = element;
        }
        else
            cout << -1;
    }

    void print() const
    {
        for (int i = 0; i < nextIndex; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};