// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
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
    for(int i=n;i>pos;i--){
        a[i]=a[i-1];
    }
    }
    a[pos]=newele;
    n++;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}
