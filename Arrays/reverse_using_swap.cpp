#include <iostream>
using namespace std;
int main() {
    int n,key;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
  for(int i=0;i<n/2;i++){
    int temp;
    temp=a[0+i];
    a[0+i]=a[n-1-i];
    a[n-1-i]=temp;
} 
for(int i=0;i<n;i++){
    cout<<a[i];
}
return 0;
}
    
  
