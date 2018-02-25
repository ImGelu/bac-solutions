#include <iostream>

using namespace std;

int main(){
    
    int n, a[100], k;
    
    cin>>n;
    k=n;
    
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++) cout<<a[i]<<" ";
    cout<<endl;
    
    while(--k){
        a[n+1]=a[1];
        for(int i=1; i<=n; i++) a[i]=a[i+1];
        for(int i=1; i<=n; i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}