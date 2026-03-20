#include <iostream>
#include<vector>
using namespace std;
int main() {
  int n,x;
  cin>>n;
   vector<int>v;
  for(int i=0;i<n;i++){
      cin>>x;
      v.push_back(x);
  }
  for(int i=0;i<n-1;i++){
  v[i]=v[i+1];
  }
  v.pop_back();
  for(int i=0;i<v.size();i++){
     cout<<v[i];
 }
    return 0;
