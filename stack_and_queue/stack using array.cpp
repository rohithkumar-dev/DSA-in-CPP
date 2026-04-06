#include <iostream>
using namespace std;
#define MAX 100
class ArrayStack {
private:
    int arr[MAX];
    int top;
public:
    ArrayStack() {
        top = -1;
    }
    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        else{
        arr[++top] = x;
    }
    }
    int pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }
        else{
        return arr[top--];
        }
    }
    int topElement() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        else{
        return arr[top];
        }
    }
    void isEmpty() {
        if(top==-1){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
}
};
int main() {
    ArrayStack stack;

    stack.push(5);
    stack.push(10);

    cout << stack.topElement() << endl; 
    cout << stack.pop() << endl;

   stack.isEmpty();

    return 0;
}
