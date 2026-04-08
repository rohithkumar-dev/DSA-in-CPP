#include <iostream>
using namespace std;
class linkedlist{
private:
struct Node {
    int data;
    struct Node* next;
};
struct Node* top = NULL;
public:
void push(int value) {
   struct Node* newNode = new struct Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << value << " pushed into stack\n";
}
void pop() {
    if (top == NULL) {
        cout << "Stack Underflow\n";
        return;
    }
   struct Node*temp = top;
    cout << temp->data << " popped from stack\n";
    top = top->next;
    delete temp;
}
void display() {
    if (top == NULL) {
        cout << "Stack is empty\n";
        return;
    }
   struct Node* temp = top;
    cout << "Stack elements: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
};
int main() {
    linkedlist ll;
    
    ll.push(10);
    ll.push(20);
    ll.push(30);

    ll.display();

    ll.pop();
    ll.display();

    return 0;
}
