#include <iostream>
using namespace std;


struct node {
  int val;
  node *next;
}; 

struct singlylinkedliset {

    node *head, *tail;
    singlylinkedliset(){
      head = NULL;
      tail = NULL;
       cout << "singly linked list  initialized! \n";

  }
     void enqueue( int x) {

    node *cur = new node;
    cur->val = x;
     cur->next = NULL;

     if (head == NULL && tail == NULL ) { 
        head = tail =cur;
    return;}
       tail ->next = cur; 
       tail = cur;  

}

  void printlist(){
cout << "singlylinkedliset: ";
        node *cur = head;
        
if (cur == NULL) {
            cout << "List is Empty!\n";
            return;
        }
        
        while (cur != NULL) {
            cout << cur->val << " -> ";
            cur = cur->next;
        }
        cout << "NULL\n";
    }

}; 


int main() {
    singlylinkedliset sl;

    

    return 0;
}
