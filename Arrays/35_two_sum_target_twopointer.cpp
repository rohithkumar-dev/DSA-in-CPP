// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int n,target,sum=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"enter target";
cin>>target;
int left=0;
int right=n-1;
while(left<right){
    sum=a[left]+a[right];
if(sum==target){
    cout<<left<<" "<<right;
    break;
}
else if(sum<target){
    left++;
}
else{
    right--;
}
}

    return 0;
}
