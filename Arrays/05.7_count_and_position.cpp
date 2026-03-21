#include <iostream>
using namespace std;
int main() {
int a[100];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int value,store=-1,storing=0;
cout<<"enter value";
cin>>value;
for(int i=0;i<n;i++){
    if(a[i]==value){
        store=i;
       cout<<i<<" ";
        storing++;
}
}
if(store==-1){
    cout<<"ele not found";
}
else{
    cout<<"count is:"<<store;
}

    return 0;
}
