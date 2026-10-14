#include <iostream>
using namespace std;

struct Node {
    int val;
    Node *next;
};

struct Queue {
    Node *headPtr; 

    Queue() {
        headPtr = NULL;
        cout << "STL-Style Queue initialized!\n";
    }

    bool empty() { 
        return headPtr == NULL;
    }
};

int main() {
    Queue q;
    
    if(q.empty()) {
        cout << "The queue is currently empty.\n";
    }

    return 0;
}
