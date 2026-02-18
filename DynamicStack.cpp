#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;


void push(int value) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = value;
    temp->next = top;
    top = temp;
}


void pop() {
    if (top == NULL) {
        cout << "Stack Underflow" << endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    free(temp);
}


void display() {
    if (top == NULL) {
        cout << "Stack is Empty" << endl;
        return;
    }
    Node* curr = top;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {

 int num, value;

    while (true) {
   
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cin >> num;

 if (num == 1){
    cout << "Enter value: ";
        cin >> value;
         push(value); 
        }
   else if (num == 2) {
        pop();
        cout << "Value has been successfully poped(deleted)." << endl;
    }
     else if (num == 3) {
        display();
     }       

    else if (num == 4) {
        cout << "Exited Successfully." << endl;
    }
 }
}
   