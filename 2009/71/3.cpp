#include <iostream>

using namespace std;

bool Palindrom(int n){
    int invers=0, aux=n;

    while(aux){
        invers=invers*10+aux%10;
        aux/=10;
    }

    if(n==invers) return true;
    else return false;
}

int main(){

    int x, maxim=-1;

    while(cin>>x)
        if(Palindrom(x) && x>maxim) maxim=x;

    cout<<maxim;

    return 0;
}