#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* data;
    int nextIndex, capacity;

public:
    DynamicArray() {
        data = new int[5];
        capacity = 5;
        nextIndex = 0;4
    }

    DynamicArray(const DynamicArray& other) {
        data = new int[other.capacity];
        capacity = other.capacity;
        nextIndex = other.nextIndex;

        for(int i = 0; i < nextIndex; i++) {
            data[i] = other.data[i];
        }
    }   

    void operator=(const DynamicArray& other) {
        data = new int[other.capacity];
        capacity = other.capacity;
        nextIndex = other.nextIndex;

        for(int i = 0; i < nextIndex; i++) {
            data[i] = other.data[i];
        }
    }

    void add(int element) {
        if(nextIndex == capacity) {
            int* newData = new int[2 * capacity];
            for(int i = 0; i < capacity; i++) {
                newData[i] = data[i];
            }

            delete []data;
            data = newData;
            capacity = 2 * capacity;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    void add(int element, int i) {
        if(i < nextIndex) {
            data[i] = element;
        } else if(i == nextIndex) {
            add(element);
        } else {
            return;
        }
    }

    int get(int i) {
        if(i>=0 && i < nextIndex) {
            return data[i];
        } else {
            return -1;
        }
    }

    void print() {
        for(int i = 0; i < capacity; i++) {
            cout << data[i] << ' ';
        }
        cout << '\n';
    }

    int getCapacity() {
        return capacity;
    }

    void remove(int index) {
        if(index < 0 || index >= nextIndex) {=
            std::cout << "Invalid index inserted." << '\n';
        }

        for(int i = index; i < nextIndex - 1; i++) {
            data[i] = data[i + 1];
        }

        nextIndex--;

        if(nextIndex < capacity / 2) {
            int* newData = new int[capacity / 2];
            for(int i = 0; i < nextIndex; i++) {
                newData[i] = data[i];
            }

            delete[] data;
            data = newData;
            capacity = capacity / 2;
        }
    }
};