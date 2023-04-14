#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* prev;
  Node* next;
};

int main() {
  
  Node* head = NULL;
  Node* tail = NULL;

  
  Node* newNode = new Node;
  newNode->data = 1;
  newNode->prev = NULL;
  newNode->next = NULL;
  head = newNode;
  tail = newNode;

  
  newNode = new Node;
  newNode->data = 2;
  newNode->prev = tail;
  newNode->next = NULL;
  tail->next = newNode;
  tail = newNode;

   
  Node* current = head;
  while (current != NULL) {
    cout << current->data << " ";
    current = current->next;
  }
  return 0;
}