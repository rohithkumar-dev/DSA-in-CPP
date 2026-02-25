#include<iostream>
using namespace std;
int main(){
  int a[100];
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
  cout<<"enter elements to store";
  cin>>a[i];
  }
  int ne;
  cout<<"enter new element(ne)";
  cin>>ne;
  a[n]=ne;
  n=n+1;
  for(int i=0;i<n;i++){
      cout<<a[i];
  }
  return 0;
}
   
