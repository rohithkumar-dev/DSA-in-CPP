#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
 int element;
 cout<<"enter element";
  cin>>element;
  int store=-1;
for(int i=0;i<n;i++){
    if(a[i]==element){
    store=i;
    break;
    }
}
if(store==-1){
    cout<<"not found";
    return 0;
}
 for(int i=store;i<n-1;i++){
     a[i]=a[i+1];
 }
  n=n-1;
  for(int i=0;i<n;i++){
      cout<<a[i];
  }
  return 0;
}
