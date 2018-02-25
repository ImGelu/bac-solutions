#include <iostream>

using namespace std;

int divizor(int n){
    int div=2, nrdiv=0;
    while(n>1){
        while(n%div==0){
            n/=div;
            nrdiv++;
        }
        if(nrdiv) return div;
        div++;
        nrdiv=0;
    }
}

int main(){

    int n, s=0, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        s+=divizor(x);
    }

    cout<<s;

    return 0;
}