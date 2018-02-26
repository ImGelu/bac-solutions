#include <iostream>

using namespace std;

bool cautare_binara(int x, int a[], int n, int ls, int ld){
    ls=1, ld=n;
    
    while(ls<=ld){
        int mij=(ls+ld)/2;
        if(x==a[mij]) return true;
        else if(x<mij) ld=mij-1;
        else ls=mij+1;
    }
    
    return false;
}


int main(){

    int a[100], b[100], n, m, ls, ld;
    
    cin>>n>>m;
    
    for(int i=1; i<=n; i++) cin>>a[i];
    
    for(int i=1; i<=m; i++){
        cin>>b[i];
        if(!cautare_binara(b[i], a, n, ls, ld)) cout<<b[i]<<" ";
    }
    
    return 0;
}