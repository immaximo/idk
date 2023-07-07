#include <iostream>
using namespace std;

struct Node {
    int num;
    Node* next;
};

Node* head = nullptr;

void insert_Node(int n) {
    Node* new_node = new Node;
    new_node->num = n;
    new_node->next = head;
    head = new_node;
}

void display_all_nodes() {
    cout << "The list contains the data entered:\n";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->num << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insert_Node(1);
    insert_Node(3);
    insert_Node(5);
    insert_Node(7);
    insert_Node(9);
    insert_Node(11);
    display_all_nodes();
    return 0;
}
