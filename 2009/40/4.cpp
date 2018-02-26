#include <iostream>

using namespace std;

bool prim(int x){
    if(x<2) return false;
    if(x==2) return true;
    if(x%2==0) return false;
    for(int i=3; i<=x/2; i+=3)
        if(x%i==0) return false;

    return true;
}

int sdiv(int y){
    int s=1+y;
    for(int i=2; i<=y/2; i++)
        if(y%i==0) s+=i;

    return s;
}

int main(){

    int n;

    cin>>n;

    for(int i=2; i<=n; i++)
        if(prim(sdiv(i))) cout<<i<<" ";

    return 0;
}