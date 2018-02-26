#include <iostream>
#include <math.h>

using namespace std;

void P(int a, int b){
    bool prim=1;
    if(a>b) swap(a, b);

    for(int i=a; i<=b; i++){
        prim=1;
        if(pow(i, (double)1/3)==(int)pow(i, (double)1/3)){
            for(int j=2; j<=(int)pow(i, (double)1/3)/2; j++)
                if((int)pow(i, (double)1/3)%j==0) prim=0;
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