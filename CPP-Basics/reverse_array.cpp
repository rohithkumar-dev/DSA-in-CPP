#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int a[n];
    cout<<"enter elements in array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"original array"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"reversed array"<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}
