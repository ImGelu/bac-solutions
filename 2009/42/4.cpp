#include <iostream>

using namespace std;

int main(){

    int n, prec, x;
    bool ok=1;

    cin>>n;
    cin>>x;
    prec=x;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(x<=prec){
            ok=0;
            break;
        }
    }

    if(ok) cout<<"DA";
    else cout<<"NU";

    return 0;
}