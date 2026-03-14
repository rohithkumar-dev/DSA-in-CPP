#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=0;
sort(a,a+n);
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            a[k]=a[i];
            k++;
        }
    }
    a[k]=a[n-1];
    k++;
    
    for(int i=0;i<k;i++){
        cout<<a[i];
    }
    return 0;
}
    
  
