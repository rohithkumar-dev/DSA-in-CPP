#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   int leader=a[n-1];
   cout<<leader;
    for(int j=n-2;j>=0;j--){
      
       if(a[j]>leader){
           cout<<a[j];
          leader=a[j];
       }
       }
    return 0;
    
}
