#include <iostream>
using namespace std;
int main() {
    int n,key,count=0;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
       cout<<"enter key";
       cin>>key;
        for(int i=0;i<n;i++){
            if(a[i]==key){
                count++;
            }
        }
        cout<<count;
  return 0;
  }
  
