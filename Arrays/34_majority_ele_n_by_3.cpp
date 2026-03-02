/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
    if(count > n/3){
        cout <<"candidate:"<<candidate;
    }
    else{
        cout << "No majority element";
    }

    return 0;
}
