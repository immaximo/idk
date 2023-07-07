#include <iostream>
#define MAX 100

using namespace std;

class Queue {
    int front, rear;
    int queue[MAX];

public:
    Queue() {
        front = rear = -1;
    }

    void qinsert(int item) {
        if (rear == MAX - 1) {
            cout << "\nQueue Overflow";
        } else if (front == -1 && rear == -1) {
            front = rear = 0;
            queue[rear] = item;
            cout << "\nItem Inserted: " << item;
        } else {
            rear++;
            queue[rear] = item;
            cout << "\nItem Inserted: " << item;
        }
    }

    void qdelete() {
        int item;

        if (rear == -1) {
            cout << "\nQueue Underflow";
        } else if (front == rear) {
            item = queue[front];
            front = rear = -1;
            cout << "\n\nItem Deleted: " << item;
        } else {
            item = queue[front];
            front++;
            cout << "\nItem Deleted: " << item;
        }
    }

    void qtraverse() {
        if (front == -1) {
            cout << "\n\nQueue is Empty\n";
        } else {
            cout << "\n\nQueue Items: ";
            for (int i = front; i <= rear; i++) {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue myq;

    myq.qdelete();
    myq.qtraverse();

    myq.qinsert(1);
    myq.qinsert(3);
    myq.qinsert(5);
    myq.qinsert(7);
    myq.qinsert(9);
    myq.qinsert(11);

    myq.qtraverse();
    myq.qdelete();
    myq.qtraverse();

    return 0;
}
