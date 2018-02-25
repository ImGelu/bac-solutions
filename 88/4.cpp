#include <iostream>

using namespace std;

int main(){

    int x, maxim=-1;
    bool prim=0;

    while(cin>>x)
        if(x>maxim) maxim=x;

    while(!prim){
        prim=1;
        for(int i=2; i<=maxim/2; i++)
            if(maxim%i==0) prim=0;

        if(!prim) maxim++;
    }

    cout<<maxim;

    return 0;
}