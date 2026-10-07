#include <iostream>
using namespace std;


struct node {
    int val;
    node *next;
    node *prev; 
};


struct doublylinkedlist {
    node *head, *tail;

    doublylinkedlist() {
        head = NULL;
        tail = NULL;
        cout << "Doubly Linked List initialized!\n";
    }
};

int main() {
    
    doublylinkedlist dl;
    
    return 0;
}