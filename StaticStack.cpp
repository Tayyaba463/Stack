#include <iostream>
using namespace std;
 
int top = 0;
int pop;
int size = 0;
int totalCapacity = 10;
int *arr;

// Initialize Array
void initCapacity () {
 arr = new int[totalCapacity]; 
}


void topValue (int value) {
    if (size == totalCapacity) {
        cout << "StackOverFlow !" << endl;
        return;
    }

    arr[size] = value;
    size++;

    cout << "Value Enter SuccessFully." << endl;
} 


void popValue() {
    if (size == 0) {
        cout << "Stack is empty. " << endl;
        return;
    }

    size--;
    cout << "Value has been Removed Successfully." << endl;
}

void displayAll() {
    if (size == 0) {
        cout << "Stack is Empty." << endl;
        return;
    }

      cout << "Stack Elements.";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}
int main () {
  
    int num, value;

    initCapacity(); //Allocation of Memory.

    while (true) {
        
        cout << "1. Top Value." << endl;
        cout << "2. Pop Value." << endl;
        cout << "3. Display All." << endl;
        cout << "4. Exit." << endl;

        cin >> num;

        switch (num)
        {
        case 1:
           cout << "Enter value ." << endl;
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