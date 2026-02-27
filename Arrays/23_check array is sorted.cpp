#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            cout<<"not sorted";
            return 0;
        }
    }
    
    cout<<"sorted";
    return 0;
}
