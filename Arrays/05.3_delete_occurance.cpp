#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int value,store=-1;
    cout<<"enter value";
    cin>>value;
    for(int i=0;i<n;i++){
        if(a[i]==value){
            store=i;
          for(int j=store;j<n-1;j++){
              a[j]=a[j+1];
          }
          n--;
        i--;
        }
    }
   if(store==-1){
    cout<<"not found";
}
else{
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}

    return 0;
}
