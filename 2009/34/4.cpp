#include <iostream>

using namespace std;

int main(){
    
    int n, valMax=-1, indexI=1, indexJ=1, a[100];

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]%2==0 && a[i-1]%2!=0) indexI=i;
        if(a[i]%2!=0 && a[i-1]%2==0){
            indexJ=i;
            if(indexJ-indexI>valMax) valMax=indexJ-indexI;
        }
    }
    
    cout<<valMax;
    
    return 0;
}