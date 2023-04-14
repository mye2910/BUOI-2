#include <iostream>
using namespace std;

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1 && rear == -1;
}

void enqueue(int value) {
    if ((rear + 1) % MAX_SIZE == front) {
        cout << "Hang doi da day!\n";
        return;
    }
    rear = (rear + 1) % MAX_SIZE;
    queue[rear] = value;
    if (front == -1) {
        front = 0;
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Hang doi rong!\n";
        return;
    }
    front = (front + 1) % MAX_SIZE;
    if (front > rear) {
        front = rear = -1;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Hang doi rong!\n";
        return;
    }
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    
    enqueue(41);
    enqueue(23);
    enqueue(4);
    enqueue(14);
    enqueue(56);
    enqueue(1);

    
    cout << "HANG DOI BAN DAU: ";
    display();

    
    enqueue(55);
    cout << "HANG DOI SAU KHI THEM 55: ";
    display();

    
    dequeue();
    cout << "HANG DOI SAU KHI XOA 23: ";
    display();

    return 0;
}