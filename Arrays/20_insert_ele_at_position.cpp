
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
 int pos,newelement;
  cout<<"enter position";
  cin>>pos;
  cout<<"enter number to be inserted";
  cin>>newelement;
  for(int i=n-1;i>=pos-1;i--){
      a[i+1]=a[i];
  }
  a[pos-1]=newelement;
  n=n+1;
  for(int i=0;i<n;i++){
      cout<<a[i];
  }
  return 0;
}
  
   
