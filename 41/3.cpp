#include <iostream>

using namespace std;

bool MULT(int a[100], int n){
    for(int i=1; i<=n; i++){
        bool exista=0;
        for(int j=1; j<=n; j++)
            if(i==a[j]) exista=1;
            
        if(!exista) return 0;
    }
    
    return 1;
}

int main(){

    int n, a[100];
    
    cin>>n;
    
    for(int i=1; i<=n; i++) cin>>a[i];
    
    cout<<MULT(a, n);
    
    return 0;
}