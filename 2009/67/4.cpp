#include <iostream>

using namespace std;

int main(){

    int n, prec, x;

    cin>>n;

    cin>>x;
    prec=x;

    for(int i=1; i<n; i++){
        cin>>x;
        if(prec!=x) cout<<prec<<" ";
        if(i==n-1) cout<<x;
        prec=x;
    }


    return 0;
}