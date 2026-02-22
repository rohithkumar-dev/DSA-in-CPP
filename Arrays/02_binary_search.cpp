#include <iostream>
using namespace std;
int main() {
    int n,key;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
  cout<<"enter key";
  cin>>key;
  int left=0;
  int right=n-1;
  while(left<=right){
      int mid=(right+left)/2;
      if(a[mid]==key){
      cout<<mid;
      return 0;
  }
  else if(key<a[mid]){
      right=mid-1;
  }
  else{
      left=mid+1;
  }
  }
 
 cout<<-1;
return 0;
}
    
  
  
