#include <iostream>
using namespace std;
 
#define totalCapacity 10
int top = 0;
int pop;
int arr[totalCapacity];


void topValue (int value) {
    if (top == totalCapacity) {
        cout << "StackOverFlow !" << endl;
        return;
    }

    arr[top] = value;
    top++;

    cout << "Value Enter SuccessFully." << endl;
} 


void popValue() {
    if (top == 0) {
        cout << "Stack is empty. " << endl;
        return;
    }

    top--;
    cout << "Value has been Removed Successfully." << endl;
}

void displayAll() {
    if (top == 0) {
        cout << "Stack is Empty." << endl;
        return;
    }

      cout << "Stack Elements.";
    for (int i = 0; i < top; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}
int main () {
  
    int num, value;
    
    while (true) {
        
        cout << "1. Top Value." << endl;
        cout << "2. Pop Value." << endl;
        cout << "3. Display All." << endl;
        cout << "4. Exit." << endl;

        cin >> num;

        switch (num)
        {
        case 1:
           cout << "Enter value . " ;
           cin >> value;
           topValue(value);
            break;
        case 2:
           popValue();
            break;
        case 3:
           displayAll();
            break;
        case 4:
           cout << "Exit Successfully." << endl;
            break;        
        
        default:
         cout << "Invalid Value Entered." << endl;
            break;
        }
    }

}


