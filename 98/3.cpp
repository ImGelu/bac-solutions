#include <iostream>

using namespace std;

int numar(int x, int y){
    bool gasit=0;
    int aux=y;

    while(!gasit){
        aux=y;
        while(aux%x==0) aux/=x;
        if(aux!=1) y--;
        else gasit=1;
    }

    return y;
}

int main(){

    int x, y;

    cin>>x>>y;

    cout<<numar(x, y);

    return 0;
}