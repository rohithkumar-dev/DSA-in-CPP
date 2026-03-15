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
int i=0;
int j=v.size()-1;
while(j>i){
    swap(v[i],v[j]);
    j--;
    i++;
}
for(int i=0;i<v.size();i++){
    cout<<v[i];
}
return 0;
}
