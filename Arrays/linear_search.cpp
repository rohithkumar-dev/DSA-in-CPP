#include <iostream>
using namespace std;
int main() {
    int n,key;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   cout<<"enter element to search";
   cin>>key;
  for(int i=0;i<n;i++){
          if(a[i]==key){
              cout<<i;
              return 0;
          }
      }
      cout<<-1;
}
  
