#include <iostream>

using namespace std;

int main(){

    bool ok=1;
    int n;

    cin>>n;

    while(n){
        if(n%10>=5) ok=0;
        n/=10;
    }

    if(ok) cout<<"Da";
    else cout<<"Nu";

    return 0;
}