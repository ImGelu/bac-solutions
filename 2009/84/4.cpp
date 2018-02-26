#include <iostream>

using namespace std;

int CMMMC(int x, int y){
    int r, xAux=x, yAux=y;
    while(yAux){
        r=xAux%yAux;
        xAux=yAux;
        yAux=r;
    }
    return (x*y)/xAux;
}

int main(){

    int x, y;

    while(cin>>x>>y) cout<<CMMMC(x, y)<<"\n";

    return 0;
}