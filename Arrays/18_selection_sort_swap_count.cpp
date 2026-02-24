#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
    if(min!=i){
        swap(a[i], a[min]);
        count++;
        
    }
        }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<count<<endl
    ;
 return 0;
}


}
