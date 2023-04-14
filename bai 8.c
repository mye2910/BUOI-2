#include <iostream>
using namespace std;

#define MAXSIZE 100

class Stack {
    int top; 
    int arr[MAXSIZE]; 

public:
    Stack() { top = -1; } 

    bool push(int x); 
    int pop(); 
    int peek(); 
    bool isEmpty(); 
};

bool Stack::push(int x) {
    if (top >= (MAXSIZE - 1)) { 
        cout << "Stack overflow" << endl;
        return false;
    }
    else {
        arr[++top] = x; 
        return true;
    }
}

int Stack::pop() {
    if (top < 0) { 
        cout << "Stack underflow" << endl;
        return 0;
    }
    else {
        int x = arr[top--]; 
        return x;
    }
}

int Stack::peek() {
    if (top < 0) { 
        cout << "Stack is empty" << endl;
        return 0;
    }
    else {
        int x = arr[top]; 
        return x;
    }
}

bool Stack::isEmpty() {
    return (top < 0); 
}

int main() {
    Stack s;
    int arr[] = { 41, 23, 4, 14, 56, 1 };

    for (int i = 0; i < 6; i++) {
        s.push(arr[i]); 
    }

    int top = s.pop(); 
    cout << "Top of stack: " << top << endl;

    cout << "Stack content: ";
    while (!s.isEmpty()) { 
        cout << s.pop() << " ";
    }
    cout << endl;

    return 0;
}