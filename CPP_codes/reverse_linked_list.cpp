#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert at the end of the list
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }
}

// Function to print the list
void printList(Node* head) {
    cout << " Linked List: ";
    while (head != nullptr) {
        cout << head->data << " → ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Function to reverse the list
void reverseList(Node*& head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;     // Save next
        current->next = prev;     // Reverse link
        prev = current;           // Move prev forward
        current = next;           // Move current forward
    }
    head = prev;
}

int main() {
    Node* head = nullptr;
    int n, value;

    cout << " How many elements you want to insert? ";
    cin >> n;

    cout << " Enter the elements:\n";
    for (int i = 0; i < n; ++i)
