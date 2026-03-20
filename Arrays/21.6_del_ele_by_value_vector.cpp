// Online C++ compiler to run C++ program online
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
  int value,store=-1;
   cout<<"enter value";
  cin>>value;
  for(int i=0;i<v.size();i++){
     if(v[i]==value){
         store=i;
         break;
     }
 }
 if(store==-1){
     cout<<"enter value not found";
     return 0;
 }
 else{                                               //else{
     for(int i=store;i<v.size()-1;i++){              // v.erase(v.begin()+store);
         v[i]=v[i+1];
     }
     v.pop_back();
 }
 for(int i=0;i<v.size();i++){
     cout<<v[i];
 }
    return 0;
}
