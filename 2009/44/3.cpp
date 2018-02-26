#include <iostream>
#include <math.h>

using namespace std;

void P(int a, int b){
    bool prim=1;
    if(a>b) swap(a, b);

    for(int i=a; i<=b; i++){
        prim=1;
        if(sqrt(i)==(int)sqrt(i)){
            for(int j=2; j<=sqrt(i)/2; j++)
                if((int)sqrt(i)%j==0) prim=0;
            if(prim && i!=1) cout<<i<<" ";
        }
    }
}

int main(){

    int a, b;

    cin>>a>>b;

    P(a, b);

    return 0;
}