#include<vector>
#include <iostream>
using namespace std;

int main() {
  vector<int>v;
int n,x;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
}
for(int i=0;i<n/2;i++){
    swap(v[i],v[n-1-i]);
}
for(int i=0;i<v.size();i++){
    cout<<v[i];
}
return 0;
}
