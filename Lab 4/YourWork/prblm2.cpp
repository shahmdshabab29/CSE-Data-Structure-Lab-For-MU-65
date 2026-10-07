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
        cout << "doubly linked list initialized!\n";
    }

    void enqueueTail(int x) {
        node *cur = new node;
        cur->val = x;
        cur->next = NULL;
        cur->prev = NULL;

        if (head == NULL && tail == NULL) { 
            head = tail = cur;
            return;
        }

        tail->next = cur; 
        cur->prev = tail; 
        tail = cur;       
    }


    void enqueueHead(int x) {
        node *cur = new node;
        cur->val = x;
        cur->next = NULL;
        cur->prev = NULL;

        if (head == NULL && tail == NULL) { 
            head = tail = cur;
            return;
        }

        cur->next = head; 
        head->prev = cur; 
        head = cur;       
    }

    void printListForward() {
        cout << "Forward:  NULL <- ";
        node *cur = head;
        if (cur == NULL) {
            cout << "List is Empty!\n";
            return;
        }
        while (cur != NULL) {
            cout << cur->val;
            if (cur->next != NULL) cout << " <-> ";
            cur = cur->next;
        }
        cout << " -> NULL\n";
    }

    
    void printListReverse() {
        cout << "Reverse:  NULL <- ";
        node *cur = tail;
        if (cur == NULL) {
            cout << "List is Empty!\n";
            return;
        }
        while (cur != NULL) {
            cout << cur->val;
            if (cur->prev != NULL) cout << " <-> ";
            cur = cur->prev;
        }
        cout << " -> NULL\n";
    }
};

int main() {
    doublylinkedlist dl;

    dl.enqueueTail(20);
    dl.enqueueTail(30);


    dl.enqueueHead(10);
    dl.enqueueHead(5);

    
    dl.printListForward(); 

    return 0;
}