#include <iostream>

using namespace std;

int multiplu(int a, int k){
    if((double)a/k==(int)a/k) return a;
    else return ((a/k)+1)*k;
}

int main(){

    int x, y, z;
    bool ok=0;

    cin>>x>>y>>z;

    for(int i=x; i<=y; i++)
        if(i==multiplu(i, z)){
            ok=1;
            break;
        }

    if(ok) cout<<"DA";
    else cout<<"NU";

    return 0;
}