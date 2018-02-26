#include <iostream>

using namespace std;

int main(){
    
    int n, a[100];
    
    cin>>n;
    
    for(int i=1; i<=n; i++) cin>>a[i];
    
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            cout<<a[i]+a[j]<<" ";

    return 0;
}