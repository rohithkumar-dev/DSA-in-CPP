#include<vector>
#include <iostream>
using namespace std;
int main() {
    vector<int>v;
    int n,x,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
    v.push_back(x);
    }
  int  firstmaximum=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]>firstmaximum){
            firstmaximum=v[i];
        }
    }
      int  secondlargest=v[0];
        for(int i=1;i<v.size();i++){
        if(v[i]>secondlargest && v[i]!=firstmaximum){
            secondlargest=v[i];
        }
        }
 if(secondlargest==firstmaximum)
        cout<<"no largest";
        else
        cout<<secondlargest;
    
     return 0;
    }
      
