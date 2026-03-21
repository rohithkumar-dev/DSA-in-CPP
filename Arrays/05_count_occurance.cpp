#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int value,store=0;
    cout<<"enter value";
    cin>>value;
    for(int i=0;i<n;i++){
        if(a[i]==value){
            store++;
        }
    }
   if(store==0){
    cout<<"not found";
}
else{
    cout<<"occurence frequency"<<store;
}

    return 0;
}
