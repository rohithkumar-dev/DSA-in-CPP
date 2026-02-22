#include <iostream>
using namespace std;
int main() {
    int n,key,answer=-1;
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
      answer=mid;
     left=mid+1;
  }
  else if(key<a[mid]){
      right=mid-1;
  }
  else{
      left=mid+1;
  }
  }
 
 cout<<answer;
return 0;
}
    
  
  
