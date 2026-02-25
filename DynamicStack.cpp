#include <iostream>
using namespace std;

struct Node
{
   int data;
   Node* next;
};

Node* top = NULL;

void insertData (int value) 
{ 
    Node* temp = (Node*) malloc (sizeof(Node));
   
    temp->data = value;
    temp->next = top;
    top = temp;
}

void popData ( ) 
 {
     if (top == NULL) {
        cout << "Stack is Empty." << endl;
        return;
    }

    Node* current = top;
       top = top->next;
      free(current);
      cout << "Value has been successfully been poped." << endl;
 }

 void display ()
 {
     if (top == NULL) {
        cout << "Stack is Empty." << endl;
        return;
    }

    Node* current = top; 
     while (current != NULL)
      {
         cout << current->data << " ";
         current = current->next;
      }
      cout << endl;
 }

 int main()
 { 
    int number, value;

     while (true)
     {
        cout << "1.Push Value." << endl;
        cout << "2.Pop Value." << endl;
        cout << "3.Display All." << endl;
        cout << "4.Exit." << endl;

        cin >> number;

        if (number == 1)
        {
          cout << "Top the value.";
          cin >> value;
          insertData(value);
        }
        else if (number == 2)
        {
            popData();
        }
       else  if (number == 3)
        {
            display();
        }
        else if (number == 4)
        {
            cout << "Exit Successfully from the system." << endl;
            break;
        }
        else 
        {
            cout << "Enter Correct Choice." << endl;
        }
     }
      return 0;
 }
