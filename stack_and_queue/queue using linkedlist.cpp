#include <iostream>
using namespace std;
class linkedlist{
private:
struct Node {
    int data;
    struct Node* next;
};
struct Node*front= NULL;
struct Node*rear=NULL;
public:
void enqueue(int value) {
   struct Node* newNode = new struct Node();
    newNode->data = value;
    newNode->next =NULL;
    if(front==NULL){
        front=rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
    cout << value << " pushed into queue\n";
}
void dequeue() {
    if (front== NULL) {
        cout << "queue Underflow\n";
        return;
    }
    else{
   struct Node*temp =front;
    front=front->next;
    delete temp;
    }
}
void display() {
    if (front== NULL) {
        cout << "queue is empty\n";
        return;
    }
   struct Node* temp =front;
    cout << "queue elements: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
};
int main() {
    linkedlist ll;
    
    ll.enqueue(10);
    ll.enqueue(20);
    ll.enqueue(30);

    ll.display();

    ll.dequeue();
    ll.display();

    return 0;
}
