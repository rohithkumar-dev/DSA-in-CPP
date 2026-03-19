// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   vector<int>v;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int newele,pos;
    cout<<"enter newele";
    cin>>newele;
    cout<<"enter pos";
    cin>>pos;
    if(pos<0||pos>n){
        cout<<"invalid position";
        return 0;
    }
    else{
        v.push_back(0);
    for(int i=v.size()-1;i>pos;i--){
        v[i]=v[i-1];
    }
    }
    v[pos]=newele;
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}
