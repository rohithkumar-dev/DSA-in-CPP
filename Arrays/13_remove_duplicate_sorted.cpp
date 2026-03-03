#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
 int pos=0;
  for(int i=1;i<n;i++){
      if(a[i]!=a[pos]){
          pos++;
          a[pos]=a[i];
      }
  }
  for(int i=0;i<=pos;i++){
      cout<<a[i];
  }
return 0;
}
    
  
  
    
  
  
