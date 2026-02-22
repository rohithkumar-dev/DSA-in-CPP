#include <iostream>
using namespace std;
int firstoccurence(int a[],int n, int key){
    int left=0,right=n-1;
    int first=-1;
  while(left<=right){
      int mid=(right+left)/2;
      if(a[mid]==key){
      first=mid;
     right=mid-1;
  }
  else if(key<a[mid]){
      right=mid-1;
  }
  else{
      left=mid+1;
  }
  }
  return first;
}
int lastoccurence(int a[],int n, int key){
    int left=0,right=n-1;
    int last=-1;
  while(left<=right){
      int mid=(right+left)/2;
      if(a[mid]==key){
      last=mid;
     left=mid+1;
  }
  else if(key<a[mid]){
      right=mid-1;
  }
  else{
      left=mid+1;
  }
  }
  return last; 
}
 int main(){
   int n,key;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
  cout<<"enter key";
  cin>>key;
  int first=firstoccurence(a,n,key);
  
  if(first==-1){
      cout<<0;
      return 0;
  }
 int last=lastoccurence(a,n,key);
  cout<<(last-first+1);
return 0;
}
    
  
  
