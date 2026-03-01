#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n-1];
   cout<<"enter consecutive numbers";
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        sum=sum+a[i];
    }
    int m=n*(n+1)/2;
    int mis=m-sum;
    cout<<"missing="<<mis;
    
 
    return 0;
    
}
