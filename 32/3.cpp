#include <iostream>

using namespace std;

void prime(int x, int y){
    if(x>y) swap(x, y);

    for(int i=x; i<=y; i++){
        int aux=i;
        bool ok=1;
        for(int j=2; j<=aux/2; j++)
            if(aux%j==0) ok=0;

        if(ok) cout<<i<<" ";
    }
}

int main(){

    int x, y;

    cin>>x>>y;

    prime(x, y);

    return 0;
}