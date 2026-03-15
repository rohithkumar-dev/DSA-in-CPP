#include <iostream>
#include<vector>
using namespace std;
    
    vector<int>v;
    void push(int value){
        v.push_back(value);
    }
    int pop(){
        int val=v.back();
     v.pop_back();
     return val;
    }
    int main() {
        int n;
        cin>>n;
        int x;
   for(int i=0;i<n;i++){
       cin>>x;
       push(x);
   }
   for(int i=0;i<n;i++){
       cout<<pop();
       }
   return 0;
}
