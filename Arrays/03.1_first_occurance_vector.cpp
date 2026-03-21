#include<vector>
#include <iostream>
using namespace std;
int main() {
    vector<int>v;
int n,x;
cin>>n;
for(int i=0;i<n;i++){
cin>>x;
    v.push_back(x);
}
int value,store=-1;
cout<<"enter value";
cin>>value;
for(int i=0;i<v.size();i++){
    if(v[i]==value){
        store=i;
    break;
    }
}
if(store==-1){
    cout<<"not found";
}
else{
    cout<<"first occurence at index:"<<store;
}

    return 0;
}
