#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNodeAtStart(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

void displayNodes(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;  

    int choice;
    int value;
    do {
        cout << "Linked List Operations:" << endl;
        cout << "[1] Insert Node at Start" << endl;
        cout << "[2] Count Nodes" << endl;
        cout << "[3] Display Nodes" << endl;
        cout << "[4] Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to insert: ";
                cin >> value;
                insertNodeAtStart(head, value);
                cout << "Node inserted at the start." << endl;
                break;
            case 2:
                cout << "Number of nodes in the linked list: " << countNodes(head) << endl;
                break;
            case 3:
                cout << "Linked list nodes: ";
                displayNodes(head);
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}
