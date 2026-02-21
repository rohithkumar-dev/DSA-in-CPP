#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
  for(int i=0;i<n/2;i++){
    if(a[0+i]!=a[n-1-i]){
        cout<<"not palindrome";
        return 0;
    }
  }
    cout<<"palindrome";
return 0;
}
    
  
