#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
 int largest=a[0];
  for(int i=1;i<n;i++){
      if(a[i]>largest){
          largest=a[i];
      }
  }
      int seclargest=-1;
      for(int i=0;i<n;i++){
          if(a[i]!=largest && a[i]>seclargest){
              seclargest=a[i];
          }
      }
      if(seclargest==-1){
          cout<<"second largest not exist"<<endl;
      }
      else{
          cout<<"second largest:"<<seclargest<<endl;
      }
  return 0;
  }
  
