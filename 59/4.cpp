#include <iostream>

using namespace std;

int divizor(int n){
    for(int i=2; i<=n; i++)
        if(n%i==0) return i;
}

int main(){

    int x;

    cin>>x;

    if(divizor(x)==x) cout<<"DA";
    else cout<<"NU";

    return 0;
}