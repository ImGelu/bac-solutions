#include <iostream>

using namespace std;

int main(){

    int n, x, prec=-1;
    bool ok=1;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(x%2==0 && prec==-1) prec=x;
        else if(x%2==0 && prec%2==0){
            if(x<prec) ok=0;

        prec=x;
        }
    }

    if(ok) cout<<"DA";
    else cout<<"NU";

    return 0;
}