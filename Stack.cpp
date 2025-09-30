#include <iostream>
using namespace std;

const int STACK_LIMIT = 100;

class Stack {
private:
    int elements[STACK_LIMIT];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    bool empty() const {
        return topIndex == -1;
    }

    bool full() const {
        return topIndex == STACK_LIMIT - 1;
    }

    void push(int item) {
        if (full()) {
            cout << "Error: Stack is full. Cannot add " << item << endl;
            return;
        }
        elements[++topIndex] = item;
        cout << item << " inserted into stack." << endl;
    }

    void pop() {
        if (empty()) {
            cout << "Error: Stack is empty. Nothing to remove." << endl;
            return;
        }
        cout << elements[topIndex--] << " removed from stack." << endl;
    }

    void show() const {
        if (empty()) {
            cout << "Stack has no elements." << endl;
            return;
        }
        cout << "Current stack (top to bottom): ";
        for (int i = topIndex; i >= 0; --i) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }

    int peek() const {
        if (empty()) {
            cout << "Stack is empty. No top element." << endl;
            return -1;
        }
        return elements[topIndex];
    }
};

int main() {
    Stack st;
    int option, num;

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push element\n";
        cout << "2. Pop element\n";
        cout << "3. Display stack\n";
        cout << "4. View top element\n";
        cout << "5. Exit\n";
        cout << "Choose option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter value: ";
                cin >> num;
                st.push(num);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.show();
                break;
            case 4:
                num = st.peek();
                if (num != -1)
                    cout << "Top element: " << num << endl;
                break;
            case 5:
                cout << "Program terminated." << endl;
                break;
            default:
                cout << "Invalid input! Try again." << endl;
        }
    } while (option != 5);

    return 0;
}
