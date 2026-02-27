#include<iostream>
using namespace std;
int main(){
    int n,s;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"no of shifts";
    cin>>s;
    s=s%n;
    while(s>0){
    int temp=a[0];
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
        }
        a[n-1]=temp;
        s--;
    }
for(int i=0;i<n;i++){
    cout<<a[i];
}
return 0;
    }
    
