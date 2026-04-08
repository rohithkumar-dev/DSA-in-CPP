#include <iostream>
using namespace std;
char st[100];
int top = -1;

void push(char ch) {
    st[++top] = ch;
}

char pop() {
    return st[top--];
}

int isValid(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            push(s[i]);
        }
        else {
            if (top == -1)
                return 0;

            char last = pop();

            if ((s[i] == ')' && last != '(') ||
                (s[i] == '}' && last != '{') ||
                (s[i] == ']' && last != '[')) {
                return 0;
            }
        }
    }
if(top==-1){
    return 1;
}
else{
    return 0;
}
}
int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    if (isValid(s))
        cout << "VALID\n";
    else
        cout << "INVALID\n";

    return 0;
}
