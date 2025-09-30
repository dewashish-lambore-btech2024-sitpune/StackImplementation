#include <iostream>
using namespace std;

class Stack {
private:
    int* data;        // dynamic array to hold stack elements
    int maxSize;      // maximum capacity
    int topIndex;     // index of the top element

public:
    Stack(int size) {
        maxSize = size;
        data = new int[maxSize];
        topIndex = -1;
    }

    ~Stack() {
        delete[] data;
    }

    bool isEmpty() const {
        return topIndex == -1;
    }

    bool isFull() const {
        return topIndex == maxSize - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Error: Cannot push " << value << " (Stack Overflow)" << endl;
            return;
        }
        data[++topIndex] = value;
        cout << value << " pushed successfully." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Error: Stack Underflow (nothing to pop)." << endl;
            return;
        }
        cout << data[topIndex--] << " popped successfully." << endl;
    }

    int top() const {
        if (isEmpty()) {
            cout << "Stack is empty. No top element." << endl;
            return -1;
        }
        return data[topIndex];
    }

    void display() const {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack contents (top to bottom): ";
        for (int i = topIndex; i >= 0; --i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;

    s.display();

    s.pop();
    cout << "After pop, top element: " << s.top() << endl;

    s.display();

    return 0;
}
