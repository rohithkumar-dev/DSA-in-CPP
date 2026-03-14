#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n,x;
    cin >> n;
    vector<int>v;
     vector<int>r;
    
    for(int i=0;i<n;i++){
        cin>>x;
       v.push_back(x);
    }
    
sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        if(v[i]!=v[i+1]){
            r.push_back(v[i]);
        }
    }
    r.push_back(v[v.size()-1]);
    for(int i=0;i<r.size();i++){
        cout<<r[i]<<endl;
    }
    return 0;
}
    
