#include <iostream>

using namespace std;

void cif(int nr, int &s){
    s=0;
    while(nr){
        s+=nr%10;
        nr/=10;
    }
}

int main(){
    
    int n, a[25], maxim=-1, s;

    cin>>n;
    
    for(int i=1; i<=n; i++){
        cin>>a[i];
        cif(a[i], s);
        if(s>maxim) maxim=s;
    }
    
    for(int i=1; i<=n; i++){
        cif(a[i], s);
        if(s==maxim) cout<<a[i]<<" ";
    }
    
    return 0;
}