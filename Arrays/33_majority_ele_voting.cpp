#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int candidate = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {

        if(count == 0) {
            candidate = a[i];
        }

        if(a[i] == candidate)
            count++;
        else
            count--;
    }
    count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == candidate)
            count++;
    }
    if(count > n/2)
        cout << candidate;
    else
        cout << "No majority element";

    return 0;
}
