
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  unordered_map<int,int>mp;
  for(int i=0;i<n;i++){
      mp[a[i]]++;
  if(mp[a[i]]>n/2){
      cout<<a[i];
      return 0;
  }
  }
  cout<<"no major element";
    return 0;
}
