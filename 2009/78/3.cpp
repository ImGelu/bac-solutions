#include <iostream>

using namespace std;

int main(){

    int n, nr=2;
    bool prim=1;

    cin>>n;

    while(nr<=n){
        prim=1;
        for(int i=2; i<=nr/2; i++)
            if(nr%i==0) prim=0;

        if(prim) cout<<nr<<" ";
        nr++;
    }

    return 0;
}