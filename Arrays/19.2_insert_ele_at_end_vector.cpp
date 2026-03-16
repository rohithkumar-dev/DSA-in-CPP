#include<vector>
#include <iostream>
using namespace std;
int main() {
    vector<int>v;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int newele;
    cout<<"enter number to be inserted";
    cin>>newele;
    v.push_back(newele);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
    }
