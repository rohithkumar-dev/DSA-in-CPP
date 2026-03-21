#include <iostream>
using namespace std;
int main() {
int a[100];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int value,store=-1,storing=-1;
cout<<"enter value";
cin>>value;
for(int i=0;i<n;i++){
    if(a[i]==value){
        if(store==-1){
        store=i;
        }
    storing=i;
    }
}
if(store==-1||storing==-1){
    cout<<"not found";
}
else{
    cout<<"first occurence at index:"<<store;
    cout<<"last occurence at index"<<storing;
}

    return 0;
}
