#include <iostream>
using namespace std;
int main() {
    int n,c=0,t=0;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }#
  for(int i=0;i<n;i++){
          if(a[i]%2==0){
              c++;
          }
          if(a[i]%2!=0){
              t++;
          }
      }
  cout<<"odd= "<<t<<endl;
  cout<<"even= "<<c<<endl;
    return 0;
}
