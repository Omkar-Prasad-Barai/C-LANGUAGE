#include <iostream>
using namespace std;

#define SIZE 5

class Stack {
    int top;
    int arr[SIZE];

public:
    Stack() { top = -1; }
    void push(int x) {
        if (top == SIZE - 1) {
            cout << "Stack overflow!" << endl;
            return;
        }
        arr[++top] = x;
    }
    void pop() {
        if (top == -1) {
            cout << "Stack underflow!" << endl;
            return;
        }
        top--;
    }
    void display() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    return 0;
}
