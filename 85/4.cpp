#include <iostream>

using namespace std;

int CMMDC(int x, int y){
    int r, xAux=x, yAux=y;
    while(yAux){
        r=xAux%yAux;
        xAux=yAux;
        yAux=r;
    }
    return xAux;
}

int main(){

    int x, y;

    while(cin>>x>>y) cout<<x/CMMDC(x, y)<<" "<<y/CMMDC(x, y)<<"\n";

    return 0;
}