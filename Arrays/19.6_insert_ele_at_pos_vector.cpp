// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
int n;
cin>>n;
int x;
vector<int>v;
for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
}
int newele,pos;
cout<<"element to be inserted";
cin>>newele;
cout<<"enter position";
cin>>pos;
v.insert(v.begin()+pos-1, newele);
for(int i=0;i<v.size();i++){
    cout<<v.at(i);
}
return 0;
}
