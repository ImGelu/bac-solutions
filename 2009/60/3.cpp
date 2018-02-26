#include <iostream>

using namespace std;

int main(){

    int a[100], n, mij, ls=1, ld=100;
    bool gasit=0;

    for(int i=1; i<=100; i++) cin>>a[i];

    cin>>n;

    while(!gasit && ls<=ld){
        mij=(ls+ld)/2;
        if(a[mij]==n) gasit=1;
        else if(n>a[mij]) ls=mij+1;
        else ld=mij-1;
    }

    if(gasit) cout<<"DA";
    else cout<<"NU";

    return 0;
}