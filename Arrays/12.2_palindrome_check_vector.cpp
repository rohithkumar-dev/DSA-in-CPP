// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    int n,x;
     cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n/2;i++){
        if(v[i]!=v[n-1-i]){
            cout<<"not palindrome";
            return 0;
        }
    }
    cout<<"PALINDROME";
    return 0;
}
