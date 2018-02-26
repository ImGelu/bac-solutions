#include <iostream>

using namespace std;

int main(){

    int nr, x;
    bool ok=0;

    while(cin>>x){
        if(x%2!=0){ ok=1; nr=x; }
    }

    if(ok) cout<<nr;
    else cout<<"Nu exista numere impare";

    return 0;
}