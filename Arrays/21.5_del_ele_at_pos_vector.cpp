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
  int pos;
  cin>>pos;
 v.erase(v.begin()+pos-1);
  for(int i=0;i<v.size();i++){
     cout<<v[i];
 }
    return 0;
}
