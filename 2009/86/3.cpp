#include <iostream>

using namespace std;

int numar(int n, int c){
    int nrNou=0, p=1;

    while(n){
        if(n%10!=c) nrNou=nrNou+(n%10)*p;
        else nrNou=nrNou+((c+1)/2)*p;
        p=p*10;
        n/=10;
    }

    return nrNou;
}

int main(){

    int n, c;

    cin>>n>>c;

    cout<<numar(n, c);

    return 0;
}