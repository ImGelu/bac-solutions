#include <iostream>

using namespace std;

int nrdiv(int n){
    int div=2, exp=0, k=0;

    while(n>1){
        while(n%div==0){
            n/=div;
            exp++;
        }
        if(exp) k++;
        div++;
        exp=0;
    }

    return k;
}

int main(){

    int n, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        cout<<nrdiv(x)<<" ";
    }

    return 0;
}