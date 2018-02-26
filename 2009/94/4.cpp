#include <iostream>
#include <math.h>
#include <limits.h>

using namespace std;

int main(){

    double x, nr, dif, difMin=INT_MAX, nrBun;

    cin>>x;

    while(cin>>nr){
        if(fabs(nr-x)<difMin){
            difMin=fabs(nr-x);
            nrBun=nr;
        }
    }

    cout<<nrBun;

    return 0;
}