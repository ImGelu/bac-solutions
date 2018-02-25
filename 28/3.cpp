#include <iostream>

using namespace std;

int main(){
    
    int n, k=0, a[53];
    
    cin>>n;
    
    for(int i=1; i<=n; i++) cin>>a[i];
    
    for(int i=1; i<=n; i++){
        int s=0;
        for(int j=1; j<=n; j++) s+=a[j];
        
        if((s-a[i])/(n-1)==a[i]) k++;
    }

    cout<<k;
    
    return 0;
}