
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int newele;
    cout<<"enter number to be inserted";
    cin>>newele;
    for(int i=n;i>0;i--){
        a[i]=a[i-1];
    }
    n++;
    a[0]=newele;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
    }
