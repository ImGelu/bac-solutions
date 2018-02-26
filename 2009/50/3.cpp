#include <iostream>

using namespace std;

bool divxy(int x, int y){
    if(x%y==0 || y%x==0) return 1;
    else return 0;
}

int main(){

    int a, b, n;

    cin>>a>>b>>n;

    if(a>b) swap(a, b);
    
    for(int i=a; i<=b; i++)
        if(divxy(n, i) && i<=n) cout<<i<<" ";
    
    return 0;
}