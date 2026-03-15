#include <iostream>
#include<algorithm>
using namespace std;
    int top=-1;
    int a[100];
    void push(int value){
        a[++top]=value;
    }
    int pop(){
     return a[top--];
     
    }
    int main() {
        int n;
        cin>>n;
        int x;
   for(int i=0;i<n;i++){
       cin>>x;
       push(x);
   }
   for(int i=0;i<n;i++){
       cout<<pop();
       }
   return 0;
}
